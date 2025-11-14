#include "verilated.h"
#include "verilated_vcd_c.h"
#include <Vysyx_25100258_cpu.h>
#include <cstdint>
#include "svdpi.h"
#include "Vysyx_25100258_cpu__Dpi.h"

#define INST_NUMBER 33


//extern uint32_t inst[INST_NUMBER];

//extern int sim_flag;
extern void ebreak_call(void);

void read_all_register(void);

void display_regs(void);

void reset(int n); 

void sim_init(void);

void sim_exit(void);

//void cpu_one_step(void);

