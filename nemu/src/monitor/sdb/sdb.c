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
#include <cpu/cpu.h>
#include <readline/readline.h>
#include <readline/history.h>
#include "sdb.h"
#include <errno.h>
#include "memory/vaddr.h"
#include "memory/paddr.h"
static int is_batch_mode = false;

void init_regex();
void init_wp_pool();

/* We use the `readline' library to provide more flexibility to read from stdin. */
static char* rl_gets() {
  static char *line_read = NULL;

  if (line_read) {
    free(line_read);
    line_read = NULL;
  }

  line_read = readline("(nemu) ");

  if (line_read && *line_read) {
    add_history(line_read);
  }

  return line_read;
}

static int cmd_c(char *args) {
  cpu_exec(-1);
  return 0;
}


static int cmd_q(char *args) {
	nemu_state.state = NEMU_QUIT;
  return -1;
}

static int cmd_help(char *args);

static int cmd_si(char *args) {
  if(args == NULL) cpu_exec(1);
	else cpu_exec(atoi(args));
	return 0;
}

static int cmd_info(char *args) {
	if(args != NULL)
	{
    if(strcmp(args, "r") == 0) isa_reg_display();
    else if(strcmp(args, "w") == 0) TODO();
    else printf("Not find this command, please use \"help\" to find the usage of info\n");
  }
  else printf("Need one parameter\n");
    return 0;
}

static int cmd_x(char *args) {
	char *endptr;
	char *arg0 = strtok(NULL, " ");
	char *arg1 = strtok(NULL, " ");

	if(arg0 == NULL || arg1 == NULL)
	{
		printf("Need two parameters\n");
		return 0;
	}

	long N = strtoul(arg0, &endptr, 10);
	errno = 0;
	if(errno == ERANGE || N < 0 || *endptr != '\0' || arg0 == endptr)
	{
		printf("Error: invalid parameter N\n");
	}
	else
	{
		errno = 0;
		unsigned long addr_long = strtoul(arg1, &endptr, 16);
		if(errno == ERANGE || addr_long > UINT32_MAX || *endptr != '\0' || arg1 == endptr)
		{
			printf("Error: invalid parameter EXPR\n");
		}
		else
		{
			//类型有待更改，比如地址以及读出来的直
			word_t addr_read;
			vaddr_t addr = (vaddr_t)addr_long;
			if(in_pmem(addr) && in_pmem(addr+4*N-1))
			{
        for(int i = 0; i < N/4+1 && i*4 < N; i++ )
        {
          printf("\033[34m0x%08x\033[0m", addr+4*i);
          printf(":\t");
          for(int j = 0; j < 4 && j+i*4 < N; j++)
          {
            addr_read = vaddr_read(addr+4*(4*i+j), 4);
            printf("0x%08x\t", addr_read);
          }
          printf("\n");
          //printf("%-6s:  0x%08x  %u\n", regs[i], gpr(i), gpr(i));
        }
			}
			else
			{
				printf("Error: wrong address\n");
				printf("address = " FMT_PADDR " is out of bound of pmem [" FMT_PADDR ", " FMT_PADDR "] at pc = " FMT_WORD "\n", addr, PMEM_LEFT, PMEM_RIGHT, cpu.pc);
			}
		}
	}
  //pmem = malloc(CONFIG_MSIZE);
	return 0;
}

static int cmd_p(char *args) {
	word_t result;
	bool success;
  if(args == NULL) printf("Need one parameter\n");
  else
  {
    result = expr(args, &success);
    if(success) printf("%d\n", result);
    else printf("Error:fail to evaluate expression\n");
    
    //TODO();    
  }
  return 0;
}

static int cmd_w(char *args) {
  if(args == NULL) printf("Need one parameter\n");
  else
  {
    TODO();
  }
	
	return 0;
}

static int cmd_d(char *args) {
  if(args == NULL) printf("Need one parameter\n");
  else
  {
    TODO();
  }

	return 0;
}

static int cmd_pt(char *args) {
  bool success;
  FILE *fp = fopen("./tools/gen-expr/input", "r");
  char result_buf[64] = {};
  char expr_buf[65536] = {};
  if (!fp) {
      printf("Unable to open the file\n");
      return 0;
  }
	for(int i = 0; i < 100; i++)
  {
    if (!fgets(result_buf, sizeof(result_buf), fp)) 
    {
      if (feof(fp)) break;//文件结束
      printf("fail to read\n");
      break;
    }

    if (!fgets(expr_buf, sizeof(expr_buf), fp)) 
    {
      if (feof(fp)) break;//文件结束
      printf("fail to read\n");
      break;
    }
    result_buf[strcspn(result_buf, "\r\n")] = '\0';
    expr_buf[strcspn(expr_buf, "\r\n")] = '\0';
    word_t expected;
    if (sscanf(result_buf, "%u", &expected) != 1) 
    {
      printf("line %d get error data - %s\n", i-1, result_buf);
      continue;
    }
    word_t result = expr(expr_buf, &success);
    if(success || (result == expected))
    {
      printf("\033[32mline %d \tsuccess\t, expect %u\t\t, result %u\033[0m\n", i, expected, result);
    } 
    else
    {
      printf("\033[32mline %d \tfail\t, expect %u\t\t, result %u\033[0m\n", i, expected, result);
    }
  }
  fclose(fp);
  return 0;
}

static struct {
  const char *name;
  const char *description;
  int (*handler) (char *);
} cmd_table [] = {
  { "help", "Display information about all supported commands", cmd_help },
  { "c", "Continue the execution of the program", cmd_c },
  { "q", "Exit NEMU", cmd_q },
  { "si", "Continue the execution of the program with one step or more steps(N)", cmd_si},
  { "info", "Print reg status with command 'r', print watchpoint with command 'w'", cmd_info},
	{ "x", "Scan the memory with 4*N bytes from the address EXPR", cmd_x},
	{ "p", "Evaluate EXPR", cmd_p},
	{ "w", "Set watchpoint", cmd_w},
	{ "d", "Delete watchpoint", cmd_d},
	{ "pt", "Test the function evaluate EXPR", cmd_pt},
  /* TODO: Add more commands */

};

#define NR_CMD ARRLEN(cmd_table)

static int cmd_help(char *args) {
  /* extract the first argument */
  char *arg = strtok(NULL, " ");
  int i;

  if (arg == NULL) {
    /* no argument given */
    for (i = 0; i < NR_CMD; i ++) {
      printf("%s - %s\n", cmd_table[i].name, cmd_table[i].description);
    }
  }
  else {
    for (i = 0; i < NR_CMD; i ++) {
      if (strcmp(arg, cmd_table[i].name) == 0) {
        printf("%s - %s\n", cmd_table[i].name, cmd_table[i].description);
        return 0;
      }
    }
    printf("Unknown command '%s'\n", arg);
  }
  return 0;
}

void sdb_set_batch_mode() {
  is_batch_mode = true;
}

void sdb_mainloop() {
  if (is_batch_mode) {
    cmd_c(NULL);
    return;
  }

  for (char *str; (str = rl_gets()) != NULL; ) {
    char *str_end = str + strlen(str);

    /* extract the first token as the command */
    char *cmd = strtok(str, " ");
    if (cmd == NULL) { continue; }

    /* treat the remaining string as the arguments,
     * which may need further parsing
     */
    char *args = cmd + strlen(cmd) + 1;
    if (args >= str_end) {
      args = NULL;
    }

#ifdef CONFIG_DEVICE
    extern void sdl_clear_event_queue();
    sdl_clear_event_queue();
#endif

    int i;
    for (i = 0; i < NR_CMD; i ++) {
      if (strcmp(cmd, cmd_table[i].name) == 0) {
        if (cmd_table[i].handler(args) < 0) { return; }
        break;
      }
    }

    if (i == NR_CMD) { printf("Unknown command '%s'\n", cmd); }
  }
}

void init_sdb() {
  /* Compile the regular expressions. */
  init_regex();

  /* Initialize the watchpoint pool. */
  init_wp_pool();
}
