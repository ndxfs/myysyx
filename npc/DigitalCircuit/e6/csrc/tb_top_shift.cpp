#include <stdio.h>
#include <stdlib.h>
#include "Vtop_shift.h"
#include <nvboard.h>

static Vtop_shift top;
void nvboard_bind_all_pins(Vtop_shift* top);

void single_cycle() {
  top.clk = 0; top.eval();
  top.clk = 1; top.eval();
}

void reset(int n) {
  top.rst_n = 0;
  while (n -- > 0) single_cycle();
  top.rst_n = 1;
}

int main(int argc, char** argv)
{
	nvboard_bind_all_pins(&top);
	nvboard_init();

	reset(10);

	while(1)
	{
		single_cycle();
		top.eval();
		nvboard_update();
	}
  exit(EXIT_SUCCESS);
}
