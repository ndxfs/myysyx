#ifndef __CPU_CPU_H__
#define __CPU_CPU_H__

#include <common.h>


void cpu_exec(uint64_t n);

#ifdef __cplusplus
extern "C" {
#endif

void set_nemu_state(int state, vaddr_t pc, int halt_ret);
void invalid_inst(vaddr_t thispc);

#ifdef __cplusplus
}
#endif

#endif

