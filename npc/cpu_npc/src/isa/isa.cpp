#include <verilated_connect.h>
#include "verilated.h"
#include "verilated_vcd_c.h"
#include "svdpi.h"
#include <cstdint>
#include "Vysyx_25100258_cpu__Dpi.h"
#include <Vysyx_25100258_cpu.h>

word_t inst;
word_t read_data;
bool w_flag, r_flag;
static Vysyx_25100258_cpu* top;
void set_nemu_state(int state, vaddr_t pc, int halt_ret);
void invalid_inst(vaddr_t thispc);

extern "C" void err_call(){
	printf("err call, sim end.\n");
	printf("at pc : 0x%x\n", top->pc);
	read_all_register();
	set_nemu_state(NPC_ABORT, top->pc, cpu.gpr[10]);
	npc_state.state = NPC_END;
}


extern "C" void ebreak_call(){
	printf("ebreak call, sim end.\n");
	printf("at pc : 0x%x\n", top->pc);
	read_all_register();
	set_nemu_state(NPC_END, top->pc, cpu.gpr[10]);
	npc_state.state = NPC_END;
}

extern "C" void unknow_inst()
{
	invalid_inst(top->pc);
}

extern "C" void cpu_pmem_write(int waddr, int wdata, char wmask)
{
	uint32_t write_data = wdata;
	//uint32_t preread_data;
	//preread_data = vaddr_read(waddr & ~0x3u, 4);
	if(w_flag)
	{
		w_flag = false;
		//printf("pmem_write called\n");
		switch (wmask) 
		{
			case 1:	vaddr_write((waddr & ~0x3u), 1, write_data);
					break;
			case 2:	vaddr_write(((waddr & ~0x3u) + 0x1u), 1, write_data >> 8);
					break;
			case 4:	vaddr_write(((waddr & ~0x3u) + 0x2u), 1, write_data >> 16);
					break;
			case 8:	vaddr_write(((waddr & ~0x3u) + 0x3u), 1, write_data >> 24);
					break;
			case 3:	vaddr_write((waddr & ~0x3u), 2, write_data);
					break;
			case 12:vaddr_write(((waddr & ~0x3u) + 0x2u), 2, write_data >> 16);
					break;
			case 15:vaddr_write((waddr & ~0x3u), 4, write_data);
					break;
		}
	}
	//vaddr_write(waddr & ~0x3u, wmask, wdata);
}

extern "C" int cpu_pmem_read(int raddr)
{
	if(r_flag)
	{		
		r_flag = false;
		//printf("cpu_pmem_read called\n");   
		read_data = vaddr_read(raddr & ~0x3u, 4); 
		return read_data;
	}
	return read_data;
}

extern "C" int cpu_inst_fetch(int pc)
{
	inst = inst_fetch((vaddr_t *)&pc, 4);
	return inst;
}

void read_all_register(){
	//extern void read_register(uint32_t reg_addr, uint32_t *reg_num);
	svSetScope(svGetScopeFromName("TOP.ysyx_25100258_cpu.u_RegisterFile"));
	for(int i = 0; i < 32; i++) read_register(i, (int *)cpu.gpr + i);
}

void read_cpu_state(Decode *s){
	svSetScope(svGetScopeFromName("TOP.ysyx_25100258_cpu.u_EXU"));
	read_s((int *)&s->pc, (int *)&s->snpc, (int *)&s->dnpc);
}
void display_regs(){
	for(int i; i < 32; i++) printf("reg[%d] = 0x%x\n", i, cpu.gpr[i]);
}

void half_cycle_down() {
	//printf("vvv----------down half cycle\n");
	top->clk = 0; top->eval();
}

void half_cycle_up() {
	//printf("^^^----------up half cycle\n");
	top->clk = 1; top->eval();
}

void single_cycle() {
	half_cycle_down();
	half_cycle_up();
}

void reset(int n) {
  top->rst = 1;
  while (n -- > 0) single_cycle();
  top->rst = 0;
}

void sim_init(){
	w_flag = false;
	r_flag = true;
	top = new Vysyx_25100258_cpu;
	reset(10);
}

void sim_exit(){
	delete top;
}

int isa_exec_once(Decode *s){
	//top->inst_in = s->isa.inst;
	//top->inst_in = inst[(top->pc - 0x80000000)/4];
	half_cycle_down();
	w_flag = false;
	r_flag = false;
	read_cpu_state(s);
	s->isa.inst = inst;
	half_cycle_up();
	w_flag = true;
	r_flag = true;
	read_all_register();
	if(npc_state.state != NPC_RUNNING) return 0;
	//printf("dnpc" FMT_WORD "\n", s->dnpc);
	//printf("sp:%x\n",cpu.gpr[2]);
	return 0;
}

/*int main() {
	sim_init();
	
	reset(10);
	
	
	while (sim_flag == 1)
	{
		cpu_one_step();
	}
	read_all_register();

	display_cpu.gpr();

	sim_exit();
}*/
