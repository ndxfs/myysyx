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

#include <isa.h>
#include "local-include/reg.h"

const char *regs[] = {
  "0", "ra", "sp", "gp", "tp", "t0", "t1", "t2",
  "s0", "s1", "a0", "a1", "a2", "a3", "a4", "a5",
  "a6", "a7", "s2", "s3", "s4", "s5", "s6", "s7",
  "s8", "s9", "s10", "s11", "t3", "t4", "t5", "t6"
};


#ifdef CONFIG_ETRACE_COND
int eindex = 0;
#endif

void isa_reg_display() {
  int reg_count;
  reg_count = sizeof(regs) / sizeof(regs[0]); 
  for(int i = 0;i < reg_count;i++)
  {
    printf("%-6s:  0x%08x  %u\n", regs[i], gpr(i), gpr(i));
  }
  printf("%-6s:  0x%08x  %u\n", "pc", cpu.pc, cpu.pc);
  printf("%-6s:  0x%08x  %u\n", "mstatus", cpu.csr[mstatus], cpu.csr[mstatus]);
  printf("%-6s:  0x%08x  %u\n", "mtvec", cpu.csr[mtvec], cpu.csr[mtvec]);
  printf("%-6s:  0x%08x  %u\n", "mepc", cpu.csr[mepc], cpu.csr[mepc]);
  printf("%-6s:  0x%08x  %u\n", "mcause", cpu.csr[mcause], cpu.csr[mcause]);
}

word_t isa_reg_str2val(const char *s, bool *success) {
	*success = false;
	for(int i = 0; i < sizeof(regs)/sizeof(regs[0]); i++)	
	{
		if(strcmp(regs[i], s) == 0)
		{
			*success = true;
			return gpr(i);
		}
	}

  if(strcmp("pc", s) == 0)
  {
    *success = true;
    return cpu.pc;
  }
  return 0;
}

int csr_check(word_t csr_addr)
{
	int index = -1;
	switch (csr_addr)
 	{
		case MSTATUS_ADDR:	index = mstatus; break;
		case MTVEC_ADDR:	index = mtvec; break;
		case MEPC_ADDR:		index = mepc; break;
		case MCAUSE_ADDR:	index = mcause; break;
		default: panic("invalid csr addr:%x", csr_addr);
	}
	return index;
}

void csr_write(word_t csr_addr, word_t data)
{
	int index = csr_check(csr_addr);
	if (index != -1) cpu.csr[index] = data; 
}

		

word_t csr_read(word_t csr_addr)
{
	int index = csr_check(csr_addr);
	if(index != -1) return cpu.csr[index];
	return 0;
}

void csrrw(word_t csr_addr, word_t src1, int rd)
{
	word_t csr_old = csr_read(csr_addr);
	csr_write(csr_addr, src1);
	if (rd != 0) gpr(rd) = csr_old;
}

word_t ecall(word_t pc)
{
	word_t next_pc;
	bool success;
	csr_write(MEPC_ADDR, pc);
#ifdef CONFIG_RVE
	csr_write(MCAUSE_ADDR, isa_reg_str2val("a5", &success));
#else
	csr_write(MCAUSE_ADDR, isa_reg_str2val("a7", &success));
#endif

	next_pc = csr_read(MTVEC_ADDR);

#ifdef CONFIG_ETRACE_COND
	printf("%s:" FMT_WORD "%*c call [@" FMT_WORD "]\n", ANSI_FMT("etrace call" ,ANSI_FG_YELLOW), pc, eindex, ' ', next_pc);
	if(eindex <16) eindex += 1;
#endif

	if(!success) panic("fail to read the regs");
	return next_pc;
}

word_t eret(word_t pc)
{
	word_t next_pc = csr_read(MEPC_ADDR);
#ifdef CONFIG_ETRACE_COND
	if(eindex) eindex -= 1;
	printf("%s:" FMT_WORD "%*c call [@" FMT_WORD "]\n", ANSI_FMT("etrace ret " ,ANSI_FG_YELLOW), pc, eindex, ' ', next_pc);
#endif
	return next_pc;
}

void csrrs(word_t csr_addr, word_t src1, int rd)
{
	word_t csr_old = csr_read(csr_addr);
	gpr(rd) = csr_old;
	csr_write(csr_addr, csr_old | src1);
}

// //改变reg的值，目前该函数是为了测试监视点是否会触发
// bool set_reg_value(const char *s, word_t reg_value)
// {
//   for(int i = 0; i < sizeof(regs)/sizeof(regs[0]); i++)	
// 	{
// 		if(strcmp(regs[i], s) == 0)
// 		{
// 			gpr(i) = reg_value;
//       return true;
// 		}
// 	}
//   return false;
// }
