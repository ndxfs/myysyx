#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "Vswitch.h"
#include <nvboard.h>
//#include "verilated.h"
//#include "verilated_fst_c.h"

//#define MAX_SIM_TIME 20
//vluint64_t sim_time = 0;
static Vswitch top;
void nvboard_bind_all_pins(Vswitch* top);

int main(int argc, char** argv)
{
	nvboard_bind_all_pins(&top);
	nvboard_init();
	//Verilated::traceEverOn(true);
	//VerilatedFstC *m_trace = new VerilatedFstC;
	//VerilatedVcdC *m_trace = new VerilatedVcdC;
	//top->trace(m_trace, 5);
	//m_trace->open("waveform.fst");
	//while (sim_time < MAX_SIM_TIME)
	while(1)
	{
		//int a = rand() & 1;
		//int b = rand() & 1;
		top.eval();
		//printf("a = %d, b = %d, f = %d\n", a, b, top.f);
		//assert(top.f == (a ^ b));
		nvboard_update();
		//m_trace->dump(sim_time);
		//sim_time++;
	}
	//m_trace->close();
  exit(EXIT_SUCCESS);
}
