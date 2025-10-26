#include "verilated.h"
#include "verilated_vcd_c.h"
#include "../obj_dir/Vbarrel_shifter.h"

VerilatedContext* contextp = NULL;
VerilatedVcdC* tfp = NULL;

static Vbarrel_shifter* top;

void step_and_dump_wave(){
  top->eval();
  contextp->timeInc(1);
  tfp->dump(contextp->time());
}
void sim_init(){
  contextp = new VerilatedContext;
  tfp = new VerilatedVcdC;
  top = new Vbarrel_shifter;
  contextp->traceEverOn(true);
  top->trace(tfp, 0);
  tfp->open("barrel_shifter.vcd");
}

void sim_exit(){
  step_and_dump_wave();
  tfp->close();
}

int main() {
  sim_init();
	top->din = 0b10100110;	top->shamt = 0b00;	top->LR = 0;	top->AL = 0; step_and_dump_wave();
	top->shamt = 0b01;	step_and_dump_wave();
	top->shamt = 0b10;	step_and_dump_wave();
	top->shamt = 0b11;	step_and_dump_wave();
	top->AL = 1;	top->LR = 1;
	top->shamt = 0b00;	step_and_dump_wave();
	top->shamt = 0b01;	step_and_dump_wave();
	top->shamt = 0b10;	step_and_dump_wave();
	top->shamt = 0b11;	step_and_dump_wave();

  sim_exit();
}
