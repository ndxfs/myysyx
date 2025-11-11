#include <cpu.h>
int main(int argc, char *argv[])
{

	sim_init();

	while(sim_flag == 1)
	{
		cpu_one_step();
	}
	read_all_register();

	display_regs();

	sim_exit();

	return 0;

}
