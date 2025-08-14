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



enum {
  TK_NOTYPE = 256, TK_ADD, TK_EQ, TK_SUB, TK_MUL, TK_DIV, TK_LB, TK_RB, TK_DEC_NUM, TK_HEX_NUM

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
  {"-", TK_SUB},                        // sub
  {"\\*", TK_MUL},                      // times
  {"/", TK_DIV},                        // div
  {"\\(", TK_LB},                       // left_bracket
  {"\\)", TK_RB},                       // right_bracket
  {"0[Xx][0-9a-fA-F]+", TK_HEX_NUM},    // hex number
  {"[0-9]+", TK_DEC_NUM},               // dec number
  
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
  char str[32];
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

        /*Log("match rules[%d] = \"%s\" at position %d with len %d: %.*s",
            i, rules[i].regex, position, substr_len, substr_len, substr_start);*/

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
          case TK_SUB:
            tokens[nr_token].type = TK_SUB; 
            nr_token++;
            break;
          case TK_MUL:
            tokens[nr_token].type = TK_MUL; 
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
            if(substr_len > 31)
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
            if(substr_len > 31)
            {
              printf("Error:this number is too long at position %d with len %d: %.*s\n", position - substr_len, substr_len, substr_len, substr_start);
              return false;
            }
            strncpy(tokens[nr_token].str, substr_start, substr_len);
            tokens[nr_token].str[substr_len] = '\0';
            tokens[nr_token].type = TK_HEX_NUM; 
            nr_token++;
            break;
          default: TODO();
        }

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
    long x;
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
    int priority = 4;//优先级:== 0,+- 1,*/ 2,- 3,() 4
    word_t val1, val2;
    bool val1_state;
    bool val2_state;
    for (int i = q; i >=  p; i--)
    {
      if(tokens[i].type == TK_LB) bracket_count += 1;
      else if(tokens[i].type == TK_RB) bracket_count -= 1;
      else if(tokens[i].type != TK_DEC_NUM && tokens[i].type != TK_HEX_NUM && bracket_count == 0)
      {
        if(priority == 4)
        {
          if(tokens[i].type == TK_MUL || tokens[i].type == TK_DIV)
          {
            op = i;
            priority = 2;
          }
          else if(tokens[i].type == TK_ADD)
          {
            op = i;
            priority = 1;
          }
          else if(tokens[i].type == TK_SUB)
          {
            if(i != 0)
            {
              if(tokens[i-1].type == TK_DEC_NUM || tokens[i-1].type == TK_HEX_NUM || tokens[i-1].type == TK_RB)
              {
                op = i;
                priority = 1;
              }
              else
              {
                op = i;
                priority = 3;
              }
            }
            else
            {
              op = i;
              priority = 3;
            }
          }
          else if(tokens[i].type == TK_EQ)
          {
            op = i;
            priority = 0;
          }
        }
        if(priority == 3)
        {
          if(tokens[i].type == TK_MUL || tokens[i].type == TK_DIV)
          {
            op = i;
            priority = 2;
          }
          else if(tokens[i].type == TK_ADD)
          {
            op = i;
            priority = 1;
          }
          else if(tokens[i].type == TK_SUB)
          {
            if(i != 0)
            {
              if(tokens[i-1].type == TK_DEC_NUM || tokens[i-1].type == TK_HEX_NUM)
              {
                op = i;
                priority = 1;
              }
            }
          }
          else if(tokens[i].type == TK_EQ)
          {
            op = i;
            priority = 0;
          }

        }
        else if(priority == 2)
        {
          if(tokens[i].type == TK_ADD || tokens[i].type == TK_SUB)
          {
            op = i;
            priority = 1;
          }
          else if(tokens[i].type == TK_EQ)
          {
            op = i;
            priority = 0;
          }

        }
        else if(priority == 1)
        {
          if(tokens[i].type == TK_EQ)
          {
            op = i;
            priority = 0;
          }
        }
      }

    }
    if (op == -1)//未找到运算符
    {  
      *state = false;
      printf("No operator found between token %d and %d\n", p, q);
      return 0;
    }
    //op = the position of 主运算符 in the token expression;
    if(op == p && tokens[op].type == TK_SUB)
    {
      val2 = eval(op + 1, q, &val2_state);
      *state = val2_state;
      return ~val2 + 1;
    }
    val1 = eval(p, op - 1, &val1_state);
    val2 = eval(op + 1, q, &val2_state);
    *state = val1_state && val2_state;
    switch (tokens[op].type) {
      case TK_ADD: return val1 +  val2;
      case TK_SUB: return val1 -  val2;/* ... */
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
      default:
        printf("Wrong expression at token %d\n", op);
        *state = false;
        return 0; 
        //assert(0);
    /* We should do more things here. */
    }
  }
}




