#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "Vswitch.h"
#include "verilated.h"
#include "verilated_vcd_c.h"

#define MAX_SIM_TIME 20
vluint64_t sim_time = 0;

int main(int argc, char** argv)
{
	Vswitch* top = new Vswitch;
	Verilated::traceEverOn(true);
	VerilatedVcdC *m_trace = new VerilatedVcdC;
	top->trace(m_trace, 5);
	m_trace->open("waveform.vcd");
	while (sim_time < MAX_SIM_TIME)
	{
		int a = rand() & 1;
		int b = rand() & 1;
		top->a = a;
		top->b = b;
		top->eval();
		printf("a = %d, b = %d, f = %d\n", a, b, top->f);
		assert(top->f == (a ^ b));
		m_trace->dump(sim_time);
		sim_time++;
	}
	m_trace->close();
	delete top;
  exit(EXIT_SUCCESS);
}
