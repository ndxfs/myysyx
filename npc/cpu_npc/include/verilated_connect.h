#ifndef __VERILATOR_CONNECT_H_
#define __VERILATOR_CONNECT_H_

#include <cpu/cpu.h>
#include <cpu/decode.h>
#include <cpu/ifetch.h>
#include <isa.h>
#include <memory/vaddr.h>
#define INST_NUMBER 33


//extern uint32_t inst[INST_NUMBER];

//extern int sim_flag;

//extern void ebreak_call(void);

#ifdef __cplusplus
extern "C"{
#endif
	extern void read_all_register(void);

	extern void display_regs(void);

	extern void reset(int n); 

	extern void sim_init(void);

	extern void sim_exit(void);

	extern int isa_exec_once(Decode *s);

#ifdef __cplusplus
}
#endif

//void cpu_one_step(void);
#endif
