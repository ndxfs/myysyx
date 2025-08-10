#include <stdio.h>
#include <stdlib.h>
#include "Valu.h"
#include <nvboard.h>

static Valu top;
void nvboard_bind_all_pins(Valu* top);


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
