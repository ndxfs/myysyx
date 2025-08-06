#include <stdio.h>
#include <stdlib.h>
#include "Vmux241_template.h"
#include <nvboard.h>

static Vmux241_template top;
void nvboard_bind_all_pins(Vmux241_template* top);


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
