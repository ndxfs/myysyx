#include "verilated.h"
#include "verilated_vcd_c.h"
#include "../obj_dir/Vseg.h"

VerilatedContext* contextp = NULL;
VerilatedVcdC* tfp = NULL;

static Vseg* top;

void step_and_dump_wave(){
  top->eval();
  contextp->timeInc(1);
  tfp->dump(contextp->time());
}
void sim_init(){
  contextp = new VerilatedContext;
  tfp = new VerilatedVcdC;
  top = new Vseg;
  contextp->traceEverOn(true);
  top->trace(tfp, 0);
  tfp->open("seg.vcd");
}

void sim_exit(){
  step_and_dump_wave();
  tfp->close();
}

int main() {
  sim_init();
  top->en=0b0; top->Switch =0b00000000; step_and_dump_wave();
               top->Switch =0b00000001; step_and_dump_wave();
  top->en=0b1; top->Switch =0b00000010; step_and_dump_wave();
               top->Switch =0b00000100; step_and_dump_wave();
               top->Switch =0b10000000; step_and_dump_wave();
               top->Switch =0b00000000; step_and_dump_wave();
               top->Switch =0b00000001; step_and_dump_wave();
               top->Switch =0b00000010; step_and_dump_wave();
               top->Switch =0b00000100; step_and_dump_wave();
               top->Switch =0b10001000; step_and_dump_wave();
  sim_exit();
}
