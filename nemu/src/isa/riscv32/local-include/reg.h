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

#ifndef __RISCV_REG_H__
#define __RISCV_REG_H__

#include <common.h>

static inline int check_reg_idx(int idx) {
  IFDEF(CONFIG_RT_CHECK, assert(idx >= 0 && idx < MUXDEF(CONFIG_RVE, 16, 32)));
  return idx;
}

#define gpr(idx) (cpu.gpr[check_reg_idx(idx)])
#define MSTATUS_ADDR 0x300
#define MTVEC_ADDR 0x305
#define MEPC_ADDR 0x341
#define MCAUSE_ADDR 0x342



static inline const char* reg_name(int idx) {
  extern const char* regs[];
  return regs[check_reg_idx(idx)];
} 

void isa_reg_display(void);
bool set_reg_value(const char *s, word_t reg_value);

void csrrw(word_t csr_addr, word_t src1, int rd);
void csr_write(word_t csr_addr, word_t data);
word_t csr_read(word_t csr_addr);
word_t ecall(word_t pc);
void csrrs(word_t csr_addr, word_t src1, int rd);
word_t eret(word_t pc);

#endif
