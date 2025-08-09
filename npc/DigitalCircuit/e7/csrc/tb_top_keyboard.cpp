#include <stdio.h>
#include <stdlib.h>
#include "Vtop_keyboard.h"
#include <nvboard.h>
#include <iostream>
#include <iomanip>
static Vtop_keyboard top;
void nvboard_bind_all_pins(Vtop_keyboard* top);

void single_cycle() {
  top.clk = 0; top.eval();
  top.clk = 1; top.eval();
}


int main(int argc, char** argv)
{
	nvboard_bind_all_pins(&top);
	nvboard_init();


	while(1)
	{
		single_cycle();
		if(top.ready == 1) std::cout << "at time:"
						<< top.cycle
						<< "---get data: 0x"
            << std::setw(2)
            << std::setfill('0')
            << std::hex
            << static_cast<unsigned int>(top.get_data)  // 关键：转为无符号整数
            << std::dec  // 可选：恢复为十进制，避免影响后续输出
            << std::endl;
		//if(top.ready == 1) std::cout<<"get data:"<<std::hex<<top.get_data<<std::endl;
		top.eval();
		nvboard_update();
	}
  exit(EXIT_SUCCESS);
}
