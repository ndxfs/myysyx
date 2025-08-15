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

#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <assert.h>
#include <string.h>
#include <unistd.h>
// this should be enough
static char buf[65536] = {};
static char *buf_ptr = buf;
static char code_buf[65536 + 128] = {}; // a little larger than `buf`
static char *code_format =
"#include <stdio.h>\n"
"int main() { "
"  unsigned result = %s; "
"  printf(\"%%u\", result); "
"  return 0; "
"}";

int choose(int n) {
  return rand() % n;
}

void gen(char c) {
  *buf_ptr = c;
  buf_ptr++;
}

static void gen_num() {
  uint32_t num = rand() % (1U << 31);
  char num_str[32];
  sprintf(num_str, "%u", num);
  for (char *p = num_str; *p; p++) {
    gen(*p);
  }
}

static void gen_rand_op() {
  switch (choose(4)) {
    case 0: gen('+'); break;
    case 1: gen('-'); break;
    case 2: gen('*'); break;
    case 3: gen('/'); break;
    case 4: gen('='); gen('='); break;
  }
}

static void gen_rand_expr() {

    switch (choose(4)) {
      case 0: gen_num(); break;
      case 1: gen('('); gen_rand_expr(); gen(')'); break;
      case 2: gen(' '); gen_rand_expr(); break;
      default: 
        gen_rand_expr(); 
        gen_rand_op();
        if(*(buf_ptr - 1) == '/')
        {
          char *last_ptr = buf_ptr; 
          do
          {
            buf_ptr = last_ptr;
            gen_num();
          } while (*(buf_ptr - 1) == '0' && last_ptr == buf_ptr - 1);
          
        } 
        else gen_rand_expr(); 
        break;
    }
}

int has_overflow_warning(const char *compile_output) {
  return strstr(compile_output, "warning: integer overflow") != NULL;
}

int main(int argc, char *argv[]) {
  int seed = time(0);
  srand(seed);
  int loop = 1;
  if (argc > 1) {
    sscanf(argv[1], "%d", &loop);
  }
  int i;
  for (i = 0; i < loop; i ++) {

    buf_ptr = buf;
    memset(buf, 0, sizeof(buf));

    gen_rand_expr();

    sprintf(code_buf, code_format, buf);

    FILE *fp = fopen("/tmp/.code.c", "w");
    assert(fp != NULL);
    fputs(code_buf, fp);
    fclose(fp);

    // int ret = system("gcc /tmp/.code.c -o /tmp/.expr");
    // if (ret != 0) continue;

    FILE *compile_fp = popen("gcc /tmp/.code.c -o /tmp/.expr 2>&1", "r");
    assert(compile_fp != NULL);

    char compile_output[8192] = {};
    size_t bytes_read = fread(compile_output, 1, sizeof(compile_output) - 1, compile_fp);
    (void)bytes_read;
    pclose(compile_fp);

    // 检查是否有溢出警告
    if (has_overflow_warning(compile_output)) {
      continue; // 有警告，重新生成
    }

    // 检查编译是否成功
    if (access("/tmp/.expr", F_OK) == -1) {
      continue; // 编译失败，重新生成
    }

    fp = popen("/tmp/.expr", "r");
    assert(fp != NULL);

    

    int result;
    int ret = fscanf(fp, "%d", &result);

    pclose(fp);

    if (ret == 1) {
      printf("%u\n%s\n", result, buf);
      continue;
    }
  }
  return 0;
}
// #include <stdint.h>
// #include <stdio.h>
// #include <stdlib.h>
// #include <time.h>
// #include <assert.h>
// #include <string.h>
// 
// // this should be enough
// static char buf[65536] = {};
// static char code_buf[65536 + 128] = {}; // a little larger than `buf`
// static char *code_format =
// "#include <stdio.h>\n"
// "int main() { "
// "  unsigned result = %s; "
// "  printf(\"%%u\", result); "
// "  return 0; "
// "}";
// 
// static void gen_rand_expr() {
//   buf[0] = '\0';
// }
// 
// int main(int argc, char *argv[]) {
//   int seed = time(0);
//   srand(seed);
//   int loop = 1;
//   if (argc > 1) {
//     sscanf(argv[1], "%d", &loop);
//   }
//   int i;
//   for (i = 0; i < loop; i ++) {
//     gen_rand_expr();
// 
//     sprintf(code_buf, code_format, buf);
// 
//     FILE *fp = fopen("/tmp/.code.c", "w");
//     assert(fp != NULL);
//     fputs(code_buf, fp);
//     fclose(fp);
// 
//     int ret = system("gcc /tmp/.code.c -o /tmp/.expr");
//     if (ret != 0) continue;
// 
//     fp = popen("/tmp/.expr", "r");
//     assert(fp != NULL);
// 
//     int result;
//     ret = fscanf(fp, "%d", &result);
//     pclose(fp);
// 
//     printf("%u %s\n", result, buf);
//   }
//   return 0;
// }

