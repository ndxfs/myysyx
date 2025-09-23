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
#include <errno.h>
/* We use the POSIX regex functions to process regular expressions.
 * Type 'man regex' for more information about POSIX regex functions.
 */
#include <regex.h>
#include "memory/vaddr.h"
#include "memory/paddr.h"



enum {
  TK_NOTYPE = 256, TK_ADD, TK_EQ, TK_SUB, TK_MUL, TK_DIV, TK_LB, TK_RB, TK_DEC_NUM, TK_HEX_NUM, TK_REG, TK_NEQ, TK_AND, TK_POINT, TK_NEG, TK_LEFT_SHIFT, TK_RIGHT_SHIFT,

  /* TODO: Add more token types */

};

static struct rule {
  const char *regex;
  int token_type;
} rules[] = {

  /* TODO: Add more rules.
   * Pay attention to the precedence level of different rules.
   */

  {" +", TK_NOTYPE},                    // spaces
  {"\\+", TK_ADD},                      // plus
  {"==", TK_EQ},                        // equal
  {"-", TK_SUB},                        // sub or neg
  {"\\*", TK_MUL},                      // times or pointer
  {"/", TK_DIV},                        // div
  {"\\(", TK_LB},                       // left_bracket
  {"\\)", TK_RB},                       // right_bracket
  {"0[Xx][0-9a-fA-F]+", TK_HEX_NUM},    // hex number
  {"[0-9]+", TK_DEC_NUM},               // dec number
	{"\\$[0-9a-zA-Z]+", TK_REG},					// reg
	{"!=", TK_NEQ},												// not equal
	{"&&", TK_AND},												// and
	{"<<", TK_LEFT_SHIFT},								// left_shift
	{">>", TK_RIGHT_SHIFT}								// right_shift
};

#define NR_REGEX ARRLEN(rules)

static regex_t re[NR_REGEX] = {};

/* Rules are used for many times.
 * Therefore we compile them only once before any usage.
 */
void init_regex() {
  int i;
  char error_msg[128];
  int ret;

  for (i = 0; i < NR_REGEX; i ++) {
    ret = regcomp(&re[i], rules[i].regex, REG_EXTENDED);
    if (ret != 0) {
      regerror(ret, &re[i], error_msg, 128);
      panic("regex compilation failed: %s\n%s", error_msg, rules[i].regex);
    }
  }
}

typedef struct token {
  int type;
  char str[33];
} Token;

static Token tokens[500] __attribute__((used)) = {};
static int nr_token __attribute__((used))  = 0;

static bool make_token(char *e) {
  int position = 0;
  int i;
  regmatch_t pmatch;

  nr_token = 0;

  while (e[position] != '\0') {
    /* Try all rules one by one. */
    for (i = 0; i < NR_REGEX; i ++) {
      if (regexec(&re[i], e + position, 1, &pmatch, 0) == 0 && pmatch.rm_so == 0) {
        char *substr_start = e + position;
        int substr_len = pmatch.rm_eo;

        

        position += substr_len;
        
        /* TODO: Now a new token is recognized with rules[i]. Add codes
         * to record the token in the array `tokens'. For certain types
         * of tokens, some extra actions should be performed.
         */
        if(nr_token >= 500)
        {
          printf("Error:input more than 500 tokens, please reduce tokens and try again\n");
          return false;
        }
        switch (rules[i].token_type) {
          case TK_NOTYPE:break;
          case TK_ADD:
            tokens[nr_token].type = TK_ADD; 
            nr_token++;
            break;
          case TK_EQ:
            tokens[nr_token].type = TK_EQ; 
            nr_token++;
            break;
					case TK_NEQ:
						tokens[nr_token].type = TK_NEQ;
						nr_token++;
						break;
          case TK_SUB:
						if(nr_token == 0) tokens[nr_token].type = TK_NEG;
						else if(tokens[nr_token - 1].type == TK_RB || tokens[nr_token - 1].type == TK_DEC_NUM || tokens[nr_token - 1].type == TK_HEX_NUM || tokens[nr_token - 1].type == TK_REG) tokens[nr_token].type = TK_SUB;
						else tokens[nr_token].type = TK_NEG;	
            nr_token++;
            break;
          case TK_MUL:
						if(nr_token == 0) tokens[nr_token].type = TK_POINT;
						else if(tokens[nr_token - 1].type == TK_RB || tokens[nr_token - 1].type == TK_DEC_NUM || tokens[nr_token - 1].type == TK_HEX_NUM || tokens[nr_token - 1].type == TK_REG) tokens[nr_token].type = TK_MUL;
						else tokens[nr_token].type = TK_POINT;
            nr_token++;
            break;
          case TK_DIV:
            tokens[nr_token].type = TK_DIV; 
            nr_token++;
            break;
          case TK_LB:
            tokens[nr_token].type = TK_LB; 
            nr_token++;
            break;
          case TK_RB:
            tokens[nr_token].type = TK_RB; 
            nr_token++;
            break;
          case TK_DEC_NUM:
            if(substr_len > 32)
            {
              printf("Error:this number is too long at position %d with len %d: %.*s\n", position - substr_len, substr_len, substr_len, substr_start);
              return false;
            }
            strncpy(tokens[nr_token].str, substr_start, substr_len);
            tokens[nr_token].str[substr_len] = '\0';
            tokens[nr_token].type = TK_DEC_NUM; 
            nr_token++;
            break;
          case TK_HEX_NUM:
            if(substr_len > 32)
            {
              printf("Error:this number is too long at position %d with len %d: %.*s\n", position - substr_len, substr_len, substr_len, substr_start);
              return false;
            }
            strncpy(tokens[nr_token].str, substr_start, substr_len);
            tokens[nr_token].str[substr_len] = '\0';
            tokens[nr_token].type = TK_HEX_NUM; 
            nr_token++;
            break;
					case TK_AND:
						tokens[nr_token].type = TK_AND;
						nr_token++;
						break;
					case TK_REG:
						if(substr_len > 33)
						{
              printf("Error:this reg address is too long at position %d with len %d: %.*s\n", position - substr_len, substr_len, substr_len, substr_start);
              return false;
            }
						if(substr_len < 2)
						{
							printf("Error:need reg name at position %d with len %d: %.*s\n", position - substr_len, substr_len, substr_len, substr_start);
							return false;
						}
						strncpy(tokens[nr_token].str, substr_start + 1, substr_len - 1);
            tokens[nr_token].str[substr_len - 1] = '\0';
            tokens[nr_token].type = TK_REG;
            nr_token++;
						break;
					case TK_LEFT_SHIFT:
						tokens[nr_token].type = TK_LEFT_SHIFT;
            nr_token++;
						break;
					case TK_RIGHT_SHIFT:
						tokens[nr_token].type = TK_RIGHT_SHIFT;
						nr_token++;
						break;
          default: TODO();
        }

        Log("match rules[%d] = \"%s\" at position %d with len %d: %.*s.Type is %d",
            i, rules[i].regex, position, substr_len, substr_len, substr_start, tokens[nr_token - 1].type);

        break;
      }
    }

    if (i == NR_REGEX) {
      printf("no match at position %d\n%s\n%*.s^\n", position, e, position, "");
      return false;
    }
  }

  return true;
}

word_t eval(int p, int q, bool *state);
word_t expr(char *e, bool *success) {
  if (!make_token(e)) {
    *success = false;
    return 0;
  }

  /* TODO: Insert codes to evaluate the expression. */
  //TODO();
  return eval(0, nr_token - 1, success);

}



bool check_parentheses(int p, int q) {
	int count = 1;
	if(tokens[p].type != TK_LB) return false;
  p += 1;
	while(p <= q)
  {
    if(tokens[p].type == TK_LB) count += 1;
    else if(tokens[p].type == TK_RB) count -= 1;
    if(count == 0) break;
    p += 1;
  }

  if(count == 0 && p == q) return true;
  return false;
}

word_t eval(int p, int q, bool *state) {
  if (p > q) {
    *state = false;
    printf("Wrong expression at token %d\n", p);
    return 0;
    //Assert(0, "Wrong expression at token %d", p);
    /* Bad expression */
  }
  else if (p == q) {
    unsigned long x;
    char *endptr;

    *state = true;

    if (tokens[p].str != NULL)
    {
      errno = 0;
      if(tokens[p].type == TK_DEC_NUM)
      {
        x = strtoul(tokens[p].str, &endptr, 10);
        if((errno == ERANGE || *endptr != '\0' || tokens[p].str == endptr) == 0)
        {
          if(x < WORD_MAX)
            return (word_t)x;
          else
            printf("input value:%s is out of max number %llu", tokens[p].str, (unsigned long long)WORD_MAX);
        }
      }
      else if(tokens[p].type == TK_HEX_NUM)
      {
        x = strtoul(tokens[p].str, &endptr, 16);
        if((errno == ERANGE || *endptr != '\0' || tokens[p].str == endptr) == 0)
        {
          if(x < WORD_MAX)
            return (word_t)x;
          else
            printf("input value:%s is out of max number %llu", tokens[p].str, (unsigned long long)WORD_MAX);
        }
      }
			else if(tokens[p].type == TK_REG)//添加寄存器类型
			{
				return isa_reg_str2val(tokens[p].str, state);
			}
    }
    *state = false;
    printf("Wrong expression at token %d", p);
    return 0;
    //Assert(0, "Wrong expression at token %d", p);

    /* Single token.
    * For now this token should be a number.
    * Return the value of the number.
    */
  }
  else if (check_parentheses(p, q) == true) {
    return eval(p + 1, q - 1, state);
    /* The expression is surrounded by a matched pair of parentheses.
    * If that is the case, just throw away the parentheses.
    */
  }
  else {
    int op = -1;
    int bracket_count = 0;
    int priority = 7;//优先级:&& 0,==,!= 1,<< >> 2,+- 3,*/ 4,- ~ 5,* 6,() 7
    word_t val1 = 0, val2 = 0;
    bool val1_state = true;
    bool val2_state = true;
    for (int i = q; i >=  p; i--)
    {
      if(tokens[i].type == TK_LB) bracket_count += 1;
      else if(tokens[i].type == TK_RB) bracket_count -= 1;
			else if(bracket_count == 0)
			{
				if(priority > 6 && tokens[i].type == TK_POINT ) {op = i; priority = 6;}
				else if(priority > 5 && tokens[i].type == TK_NEG) {op = i; priority = 5;}
				else if(priority > 4 && (tokens[i].type == TK_MUL || tokens[i].type == TK_DIV)) {op = i; priority = 4;}
				else if(priority > 3 && (tokens[i].type == TK_ADD || tokens[i].type == TK_SUB)) {op = i; priority = 3;}
				else if(priority > 2 && (tokens[i].type == TK_LEFT_SHIFT || tokens[i].type == TK_RIGHT_SHIFT)) {op = i; priority = 2;}
				else if(priority > 1 && (tokens[i].type == TK_EQ || tokens[i].type == TK_NEQ)) {op = i; priority = 1;}
				else if(priority > 0 && tokens[i].type == TK_AND) {op = i; priority = 0;}
			}
    }
    if (op == -1)//未找到运算符
    {  
      *state = false;
      printf("No operator found between token %d and %d\n", p, q);
      return 0;
    }
    //op = the position of 主运算符 in the token expression;
		//单目运算符只需计算val2,包括neg，pointer
		//reg不是单目运算符，是一个整体放在十进制以及十六进制数判断里面
		if(tokens[op].type != TK_POINT && tokens[op].type != TK_NEG)
    {
			if(op == 0)
				val1_state = false;
			else	
				val1 = eval(p, op - 1, &val1_state);
    }
    val2 = eval(op + 1, q, &val2_state);
    *state = val1_state && val2_state;
    switch (tokens[op].type) {
      case TK_ADD: return val1 + val2;
      case TK_SUB: return val1 - val2;/* ... */
      case TK_MUL: return (word_t)((int)val1 *  (int)val2);/* ... */
      case TK_DIV: 
        if(val2 == 0)
        {
          *state = false;
          printf("Division by zero at token %d\n", op);
          return 0;
        }
        return (word_t)((int)val1 /  (int)val2);/* ... */
      case TK_EQ : return val1 == val2;
			case TK_NEG: return ~val2 + 1;
			case TK_LEFT_SHIFT: return val1 << val2;
			case TK_RIGHT_SHIFT: return val1 >> val2;
			case TK_NEQ: return val1 != val2;
			case TK_AND: return val1 && val2;
			case TK_POINT:	if(in_pmem(val2))
												return vaddr_read(val2, sizeof(word_t));
											else
                      {
												*state = false;
												return 0;
                      }
      default:
        printf("Wrong expression at token %d\n", op);
        *state = false;
        return 0; 
        //assert(0);
    /* We should do more things here. */
    }
  }
}




