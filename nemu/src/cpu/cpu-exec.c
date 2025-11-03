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

#include <cpu/cpu.h>
#include <cpu/decode.h>
#include <cpu/difftest.h>
#include <locale.h>
#include "../monitor/sdb/sdb.h"

/* The assembly code of instructions executed is only output to the screen
 * when the number of instructions executed is less than this value.
 * This is useful when you use the `si' command.
 * You can modify this value as you want.
 */
#define MAX_INST_TO_PRINT 10
#define MAX_IRINGBF 16

typedef struct{
	char logs[MAX_IRINGBF][128];
	vaddr_t pcs[MAX_IRINGBF];
	int head;
	int tail;
	int count;
} IRingBuf;

CPU_state cpu = {};
uint64_t g_nr_guest_inst = 0;
static uint64_t g_timer = 0; // unit: us
static bool g_print_step = false;
static bool watchpoint_flag = false;
static IRingBuf iringbuf;

void device_update();

void init_iringbuf() {
	iringbuf.head = 0;
	iringbuf.tail = 0;
	iringbuf.count = 0;
	memset(iringbuf.logs, 0, sizeof(iringbuf.logs));
}

void record_error_instruction(vaddr_t pc){
	if (iringbuf.count < MAX_IRINGBF) {
        	iringbuf.count++;
    	} else {
        	iringbuf.head = (iringbuf.head + 1) % MAX_IRINGBF;
    	}
    
    	char error_log[128];
    	snprintf(error_log, sizeof(error_log), "0x%08x: <memory access error>", pc);
    
    	strcpy(iringbuf.logs[iringbuf.tail], error_log);
    	iringbuf.pcs[iringbuf.tail] = pc;
    	iringbuf.tail = (iringbuf.tail + 1) % MAX_IRINGBF;
}

void print_iringbuf(vaddr_t pc) {
	int index;
	
	printf("Instructions ringbuffer recorded %d instructions-----------------\n", iringbuf.count);
	if(iringbuf.count == 0) {
		printf("No instruction recorded\n");
		return;
	}

	for (int i = 0; i < iringbuf.count; i++){
		index = (iringbuf.head + i) % MAX_IRINGBF;
		if (iringbuf.pcs[index] == pc) printf("--> ");
		else printf("    ");
		printf("%s\n", iringbuf.logs[index]);
	}
	printf("----------------------------------------------------------------\n");
}

static void trace_and_difftest(Decode *_this, vaddr_t dnpc) {
#ifdef CONFIG_ITRACE_COND
  if (ITRACE_COND) { \
	  log_write("%s\n", _this->logbuf); 
	  if(iringbuf.count < MAX_IRINGBF){
		  iringbuf.count++;
	  }
	  else {
		  iringbuf.head = (iringbuf.head + 1) % MAX_IRINGBF;
	  }

	  strcpy(iringbuf.logs[iringbuf.tail], _this->logbuf);
	  iringbuf.pcs[iringbuf.tail] = _this->pc;
	  iringbuf.tail = (iringbuf.tail + 1) % MAX_IRINGBF;
  }
#endif
  if (g_print_step) { IFDEF(CONFIG_ITRACE, puts(_this->logbuf)); }
  IFDEF(CONFIG_DIFFTEST, difftest_step(_this->pc, dnpc));

#ifdef CONFIG_FTRACE_COND
  void check_function_call_or_return(Decode *s);
  check_function_call_or_return(_this);
#endif
#ifdef CONFIG_WATCHPOINT 
  //printf("prewatching point ready\n");
  watchpoint_flag = watchpoint_check();
  if (watchpoint_flag) nemu_state.state = NEMU_STOP;
#endif

}

static void exec_once(Decode *s, vaddr_t pc) {
  s->pc = pc;
  s->snpc = pc;
  isa_exec_once(s);
  cpu.pc = s->dnpc;
#ifdef CONFIG_ITRACE
  char *p = s->logbuf;
  p += snprintf(p, sizeof(s->logbuf), FMT_WORD ":", s->pc);
  int ilen = s->snpc - s->pc;
  int i;
  uint8_t *inst = (uint8_t *)&s->isa.inst;
#ifdef CONFIG_ISA_x86
  for (i = 0; i < ilen; i ++) {
#else
  for (i = ilen - 1; i >= 0; i --) {
#endif
    p += snprintf(p, 4, " %02x", inst[i]);
  }
  int ilen_max = MUXDEF(CONFIG_ISA_x86, 8, 4);
  int space_len = ilen_max - ilen;
  if (space_len < 0) space_len = 0;
  space_len = space_len * 3 + 1;
  memset(p, ' ', space_len);
  p += space_len;

  void disassemble(char *str, int size, uint64_t pc, uint8_t *code, int nbyte);
  disassemble(p, s->logbuf + sizeof(s->logbuf) - p,
      MUXDEF(CONFIG_ISA_x86, s->snpc, s->pc), (uint8_t *)&s->isa.inst, ilen);
#endif
}

static void execute(uint64_t n) {
  Decode s;
  for (;n > 0; n --) {
    exec_once(&s, cpu.pc);
    g_nr_guest_inst ++;
    trace_and_difftest(&s, cpu.pc);
    if (nemu_state.state != NEMU_RUNNING) break;
    IFDEF(CONFIG_DEVICE, device_update());
  }
}

static void statistic() {
  IFNDEF(CONFIG_TARGET_AM, setlocale(LC_NUMERIC, ""));
#define NUMBERIC_FMT MUXDEF(CONFIG_TARGET_AM, "%", "%'") PRIu64
  Log("host time spent = " NUMBERIC_FMT " us", g_timer);
  Log("total guest instructions = " NUMBERIC_FMT, g_nr_guest_inst);
  if (g_timer > 0) Log("simulation frequency = " NUMBERIC_FMT " inst/s", g_nr_guest_inst * 1000000 / g_timer);
  else Log("Finish running in less than 1 us and can not calculate the simulation frequency");
}

void assert_fail_msg() {
  isa_reg_display();
  statistic();
}

/* Simulate how the CPU works. */
void cpu_exec(uint64_t n) {
  g_print_step = (n < MAX_INST_TO_PRINT);
  switch (nemu_state.state) {
    case NEMU_END: case NEMU_ABORT: case NEMU_QUIT:
      printf("Program execution has ended. To restart the program, exit NEMU and run again.\n");
      return;
    default: nemu_state.state = NEMU_RUNNING;
  }

  uint64_t timer_start = get_time();

  execute(n);

  uint64_t timer_end = get_time();
  g_timer += timer_end - timer_start;

  switch (nemu_state.state) {
    case NEMU_RUNNING: nemu_state.state = NEMU_STOP; break;

    case NEMU_END: case NEMU_ABORT:
      Log("nemu: %s at pc = " FMT_WORD,
          (nemu_state.state == NEMU_ABORT ? ANSI_FMT("ABORT", ANSI_FG_RED) :
           (nemu_state.halt_ret == 0 ? ANSI_FMT("HIT GOOD TRAP", ANSI_FG_GREEN) :
            ANSI_FMT("HIT BAD TRAP", ANSI_FG_RED))),
          nemu_state.halt_pc);
      // fall through
    case NEMU_QUIT: statistic();
  }
}
