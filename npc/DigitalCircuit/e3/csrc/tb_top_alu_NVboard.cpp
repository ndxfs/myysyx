#include <stdio.h>
#include <stdlib.h>
#include "Vtop_alu.h"
#include <nvboard.h>

static Vtop_alu top;
void nvboard_bind_all_pins(Vtop_alu* top);


int main(int argc, char** argv)
{
	nvboard_bind_all_pins(&top);
	nvboard_init();


	while(1)
	{
		top.eval();
		nvboard_update();
	}
  exit(EXIT_SUCCESS);
}
