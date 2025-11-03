// test_my_sprintf.c
#include <stdio.h>
#include <string.h>
#include <stdarg.h>

// 复制你的sprintf实现到这里，但移除AM依赖
int my_sprintf(char *out, const char *fmt, ...) {
    va_list ap;
    int d;
    char c;
    char *s;
    char *p = out;
    
    va_start(ap, fmt);
    while (*fmt){
		printf("test_fmt: %c\n", *fmt);
        if(*fmt != '%')
		{
			printf("test_copy: %c\n", *fmt);
            		*p++ = *fmt++;
		}
        else
		{
            switch (*++fmt) {
            case 's':/* string */
                s = va_arg(ap, char *);
				printf("test_s: %s\n", s);
                strcpy(p, s);
                p += strlen(s);
                break;
            case 'd':/* int */
                {
                    char buf[20];
                    char *buf_p = buf + 19;
                    int is_neg = 0;
                    unsigned int num; 
                    d = va_arg(ap, int);
                    printf("test_d: %d\n", d);
                    *buf_p = '\0';
                    
                    if (d < 0) {
                        is_neg = 1;
                        num = (unsigned int)-d;             
                    }
                    else num = (unsigned int)d;
                    
                    if (num == 0) {
                        *--buf_p = '0';
                    }
                    
                    while (num > 0) {
                        *--buf_p = (num % 10) + '0';
                        num /= 10;
                    }
                    
                    if (is_neg) {
                        *--buf_p = '-';
                    }
                    
                    strcpy(p, buf_p);
                    p += strlen(buf_p);
                }
                break;
            case 'c':/* char */
                c = (char) va_arg(ap, int);
                *p++ = c;
                break;
            default: 
                *p++ = '%';
                *p++ = *fmt;
                break;
            }
			fmt++;
		}
    }
    va_end(ap);
    *p = '\0';
    return p - out;
}

char buf[128];

int main() {
    my_sprintf(buf, "%s", "Hello world!\n");
	printf("true:Hello world!\n");
	printf("my:%s\n", buf);
    printf("Test 1: %d\n", (strcmp(buf, "Hello world!\n") == 0));

    my_sprintf(buf, "%d + %d = %d\n", 1, 1, 2);
	printf("true:1 + 1 = 2\n");
	printf("my:%s\n", buf);
    printf("Test 2: %d\n", (strcmp(buf, "1 + 1 = 2\n") == 0));

    my_sprintf(buf, "%d + %d = %d\n", 2, 10, 12);
	printf("true:%s\n", buf);
    printf("my:Test 3: %d\n", (strcmp(buf, "2 + 10 = 12\n") == 0));

    // 测试负数
    my_sprintf(buf, "Negative: %d\n", -42);
	printf("my:%s\n", buf);
    printf("Test 4: %d\n", (strcmp(buf, "Negative: -42\n") == 0));

    // 测试零
    my_sprintf(buf, "Zero: %d\n", 0);
	printf("my:%s\n", buf);
    printf("Test 5: %d\n", (strcmp(buf, "Zero: 0\n") == 0));

    return 0;
}
