#include "verilated.h"
#include "verilated_vcd_c.h"
#include "obj_dir/Vmux241_template.h"

VerilatedContext* contextp = NULL;
VerilatedVcdC* tfp = NULL;

static Vmux241_template* top;

void step_and_dump_wave(){
  top->eval();
  contextp->timeInc(1);
  tfp->dump(contextp->time());
}
void sim_init(){
  contextp = new VerilatedContext;
  tfp = new VerilatedVcdC;
  top = new Vmux241_template;
  contextp->traceEverOn(true);
  top->trace(tfp, 0);
  tfp->open("vmux241_template.vcd");
}

void sim_exit(){
  step_and_dump_wave();
  tfp->close();
}

int main() {
  sim_init();
  top->s=0b00;  top->a=0b11101110;  step_and_dump_wave();
                top->a=0b00010001;  step_and_dump_wave();
  top->s=0b01;  top->a=0b11101110;  step_and_dump_wave();
                top->a=0b00100010;  step_and_dump_wave();
  top->s=0b10;  top->a=0b10101010;  step_and_dump_wave();
                top->a=0b01000100;  step_and_dump_wave();
  top->s=0b11;  top->a=0b01110111;  step_and_dump_wave();
                top->a=0b10011001;  step_and_dump_wave();
  sim_exit();
}
