/***************************************************************************************
* Copyright (c) 2014-2024 Zihao Yu, Nanjing University
*
* NEMU is licensed under Mulan PSL v2.
* You can use this software according to the terms and conditions of the Mulan PSL v2.
* You may obtain a copy of Mulan PSL v2 at:
*          http://license.coscl.org.cn/MulanPSL2
*
* THIS SOFTWARE IS PROVIDED ON AN "AS IS" BASIS, WITHOUT WARRANTIES OF ANY KIND,
* EITHER EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO NON-INFRINGEMENT,
* MERCHANTABILITY OR FIT FOR A PARTICULAR PURPOSE.
*
* See the Mulan PSL v2 for more details.
***************************************************************************************/

#include <verilated_connect.h>
#include <isa.h>
#include <memory/paddr.h>

// this is not consistent with uint8_t
// but it is ok since we do not access the array directly
static const uint32_t img [] = {
0x00000413,          	//li	s0,0
0x00009117,          	//auipc	sp,0x9
0xffc10113,          	//addi	sp,sp,-4 # 80009000 <_end>
0x00c000ef,          	//jal	ra,80000018 <_trm_init>
0x00000513,          	//li	a0,0
0x00008067,          	//ret
0xff010113,          	//addi	sp,sp,-16
0x00000517,          	//auipc	a0,0x0
0x01c50513,          	//addi	a0,a0,28 # 80000038 <_etext>
0x00112623,          	//sw	ra,12(sp)
0xfe9ff0ef,          	//jal	ra,80000010 <main>
0x00050513,          	//mv	a0,a0
0x00100073,          	//ebreak
0x0000006f,          	//j	80000034 <_trm_init+0x1c>  
 

};

static void restart() {
  /* Set the initial program counter. */
  cpu.pc = RESET_VECTOR;

  /* The zero register is always 0. */
  cpu.gpr[0] = 0;
}

void init_isa() {
  /* Load built-in image. */
  memcpy(guest_to_host(RESET_VECTOR), img, sizeof(img));

  /* Initialize this virtual computer system. */
  restart();
  sim_init();
}
