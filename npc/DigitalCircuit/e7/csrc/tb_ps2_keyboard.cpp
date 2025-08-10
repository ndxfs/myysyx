#include "verilated.h"
#include "verilated_vcd_c.h"
#include "../obj_dir/Vps2_keyboard.h"
#include <iostream>
VerilatedContext* contextp = NULL;
VerilatedVcdC* tfp = NULL;


static Vps2_keyboard* top;
void single_cycle() {
   if(top->clk) top->ps2_clk ^= 0b1; top->clk ^= 0b1; top->eval(); contextp->timeInc(1); tfp->dump(contextp->time()); 
 }
 
 void reset(int n) {
   top->clrn = 1;
   while (n -- > 0) single_cycle();
   top->clrn = 0;
 }

void sim_init(){
  contextp = new VerilatedContext;
  tfp = new VerilatedVcdC;
  top = new Vps2_keyboard;
  contextp->traceEverOn(true);
  top->trace(tfp, 0);
  tfp->open("ps2_keyboard.vcd");
}

void sim_exit(){
  single_cycle();
	single_cycle();
  tfp->close();
}

void sendcode(uint8_t code)
{
	bool parity = 0;
	uint16_t send = code << 1;
  while (code != 0) 
	{
        parity ^= (code & 1);  
        code >>= 1;
  }
	if (top -> ps2_clk == 1) 
	{
		single_cycle();
		single_cycle();
	}
	send += ((parity^1) << 9) + (1 << 10);
	int i = 0;
	while(i < 11)
	{
		single_cycle();
		top -> ps2_data = send & 1;
		send = send >> 1;
		i += 1;
		single_cycle();
		single_cycle();
		single_cycle();
	}
}

int main() {
  sim_init();
	top->ps2_data = 1;
	//top->ps2_clk = 1;
	reset(10);
	sendcode(0b11110000);
	sendcode(0b00001111);
	sendcode(0b10101010);
	sendcode(0b01010101);
	top->nextdata_n = 1;
	int i=0;
  while(i < 50)
    {
      i += 1;
      single_cycle();
    }
	sendcode(0b10101010);
	sendcode(0b01001101);

	top->nextdata_n = 0;
	single_cycle();
	single_cycle();
	sim_exit();
}
