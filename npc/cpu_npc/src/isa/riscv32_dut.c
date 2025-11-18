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
#include <cpu/difftest.h>
#include "reg.h"
#include <utils.h>
bool isa_difftest_checkregs(CPU_state *ref_r, vaddr_t pc) {
	int idx = MUXDEF(CONFIG_RVE, 16, 32);
	
	if(ref_r->pc != pc) 
	{
		printf(ANSI_FMT("difftest error", ANSI_FG_RED) ":DUT pc is not equal with REF pc at DUT pc = " ANSI_FMT(FMT_WORD, ANSI_FG_RED) ";REF pc =" ANSI_FMT(FMT_WORD, ANSI_FG_RED) "\n", pc, ref_r->pc);
		return false;
	}
	for(int i = idx - 1; i >= 0; i--)
	{
		if(ref_r->gpr[i] != gpr(i))
		{
			printf( ANSI_FMT("difftest error:", ANSI_FG_RED) ":the reg = " ANSI_FMT("%s", ANSI_FG_RED) " is not equal between DUT and REF. DUT value is " ANSI_FMT("0x%x", ANSI_FG_RED) " while REF value is is " ANSI_FMT("0x%x", ANSI_FG_RED) " at pc = " ANSI_FMT(FMT_WORD, ANSI_FG_RED)  "\n", reg_name(i), gpr(i), ref_r->gpr[i], pc);
			return false;
		}
	}
	//if(ref_r->pc != pc) printf(ANSI_FMT("difftest error", ANSI_FG_RED) "DUT pc is not equal with REF pc at DUT pc = " ANSI_FMT(FMT_WORD, ANSI_FG_RED) ";REF pc =" ANSI_FMT(FMT_WORD, ANSI_FG_RED) "\n", pc, ref_r->pc);
	return true;
}

void isa_difftest_attach() {
}
