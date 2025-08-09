#include "verilated.h"
#include "verilated_vcd_c.h"
#include "../obj_dir/Vaddsub.h"
#include <iostream>
VerilatedContext* contextp = NULL;
VerilatedVcdC* tfp = NULL;

static Vaddsub* top;

void step_and_dump_wave(){
  top->eval();
  contextp->timeInc(1);
  tfp->dump(contextp->time());
}
void sim_init(){
  contextp = new VerilatedContext;
  tfp = new VerilatedVcdC;
  top = new Vaddsub;
  contextp->traceEverOn(true);
  top->trace(tfp, 0);
  tfp->open("addsub.vcd");
}

void sim_exit(){
  step_and_dump_wave();
  tfp->close();
}

void check(int i, int j, int Cin)
{
	int eresult, ecarry, eoverflow, ua, ub, usum, true_b;
	true_b = (Cin == 1) ? (-j) : j;
	eresult = (i + true_b) & 0x0F;
	eoverflow = (i + true_b < -8) || (i + true_b  > 7) ? 1 : 0;

	ua = (i < 0) ? (i + 16) : i;  // 转换为无符号（0~15）
  ub = (true_b < 0) ? (true_b + 16) : true_b;
  usum = ua + ub;
  ecarry = (usum >= 16) ? 1 : 0;
	if(eresult != top->Result)
		std::cout<<"error result with input i:"<<i<<" j:"<<j<<" Cin:"<<Cin<<" expect result:"<<eresult<<" actual result:"<<(int)top->Result<<std::endl;
	if(ecarry != top->Carry)
		std::cout<<"error carry with input i:"<<i<<" j:"<<j<<" Cin:"<<Cin<<" expect carry:"<<ecarry<<" actual carry:"<<(int)top->Carry<<std::endl;
	if(eoverflow != top->Overflow)
		std::cout<<"error overflow with input i:"<<i<<" j:"<<j<<" Cin:"<<Cin<<" expect overflow:"<<eoverflow<<" actual overflow:"<<(int)top->Overflow<<std::endl;}

int main() {
  sim_init();
	top->Cin = 0b0;
	for(int i = -8; i <= 7; i++)
	{
		for(int j = -8; j <= 7; j++)
		{
			top->A = i & 0x0F;
			top->B = j & 0x0F;
			step_and_dump_wave();
			check(i, j, 0);
		}
	}
	top->Cin = 0b1;
  for(int i = -8; i <= 7; i++)
  {
    //for(int j = -8; j <= 7; j++)
		for(int j = -8; j <= 7; j++)//在cin为1时，j的取值发生变化，因为四位有符号数取值范围为-8--7
    {
      top->A = i & 0x0F;
	    top->B = j & 0x0F;
      step_and_dump_wave();
			check(i, j, 1);
    }
	}
	sim_exit();
}
