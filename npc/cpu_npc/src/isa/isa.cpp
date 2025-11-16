#include <verilated_connect.h>
#include <cpu/decode.h>
#include <cpu/ifetch.h>
#include <isa.h>

/*uint32_t inst[INST_NUMBER] = {
  // 32条addi指令：格式为 addi rd, rs1, imm（用x0做rs1，直接给rd赋值imm，易观察）
  0x00100093,  // 0: addi x1, x0, 1    (pc=0x80000000 → 索引0)
  0x00200113,  // 1: addi x2, x0, 2    (pc=0x80000004 → 索引1)
  0x00300193,  // 2: addi x3, x0, 3    (pc=0x80000008 → 索引2)
  0x00400213,  // 3: addi x4, x0, 4
  0x00500293,  // 4: addi x5, x0, 5
  0x00600313,  // 5: addi x6, x0, 6
  0x00700393,  // 6: addi x7, x0, 7
  0x00800413,  // 7: addi x8, x0, 8
  0x00900493,  // 8: addi x9, x0, 9
  0x00a00513,  // 9: addi x10, x0, 10
  0x00b00593,  // 10: addi x11, x0, 11
  0x00c00613,  // 11: addi x12, x0, 12
  0x00d00693,  // 12: addi x13, x0, 13
  0x00e00713,  // 13: addi x14, x0, 14
  0x00f00793,  // 14: addi x15, x0, 15
  0x01000813,  // 15: addi x16, x0, 16
  0x01100893,  // 16: addi x17, x0, 17
  0x01200913,  // 17: addi x18, x0, 18
  0x01300993,  // 18: addi x19, x0, 19
  0x01400a13,  // 19: addi x20, x0, 20
  0x01500a93,  // 20: addi x21, x0, 21
  0x01600b13,  // 21: addi x22, x0, 22
  0x01700b93,  // 22: addi x23, x0, 23
  0x01800c13,  // 23: addi x24, x0, 24
  0x01900c93,  // 24: addi x25, x0, 25
  0x01a00d13,  // 25: addi x26, x0, 26
  0x01b00d93,  // 26: addi x27, x0, 27
  0x01c00e13,  // 27: addi x28, x0, 28
  0x01d00e93,  // 28: addi x29, x0, 29
  0x01e00f13,  // 29: addi x30, x0, 30
  0x01f00f93,  // 30: addi x31, x0, 31 （RISC-V只有x0-x31，最后一条用x31）
  0x02000013,  // 31: addi x0, x0, 32 （x0写不进去，验证“写x0无效”特性）
  0x00100073,  //ebreak
};*/


static Vysyx_25100258_cpu* top;
void set_nemu_state(int state, vaddr_t pc, int halt_ret);
void invalid_inst(vaddr_t thispc);

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
	top->clk = 0; top->eval();
}

void half_cycle_up() {
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
	top = new Vysyx_25100258_cpu;
	reset(10);
}

void sim_exit(){
	delete top;
}

int isa_exec_once(Decode *s){
	s->isa.inst = inst_fetch(&s->pc, 4);
	top->inst_in = s->isa.inst;
	//top->inst_in = inst[(top->pc - 0x80000000)/4];
	half_cycle_down();
	read_cpu_state(s);
	half_cycle_up();
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
