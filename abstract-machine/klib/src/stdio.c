#include <am.h>
#include <klib.h>
#include <klib-macros.h>
#include <stdarg.h>
#include <unistd.h>//用于write

#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)
#define PRINTF_BUF_SIZE 4096

int vsprintf(char *out, const char *fmt, va_list ap) {
	char *p = out;

	while (*fmt){
		if(*fmt != '%')
			*p++ = *fmt++;
		else
		{
			switch (*++fmt) {
			case 's':/* string */
			{
				char *s;
				s = va_arg(ap, char *);
				strcpy(p, s);
				p += strlen(s);
				break;
			}
			case 'd':/* int */
			{
				int d;
				char buf[20];
				char *buf_p = buf + 19;
				int is_neg = 0;
				unsigned int num; 
				d = va_arg(ap, int);

	
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
				break;
			}
			case 'c':/* char */
				/* need a cast here since va_arg only
				ta kes fully promoted types */
			{
				char c;
				c = (char) va_arg(ap, int);
				*p++ = c;
				break;
			}
			case 'p':/* pointer */
			{
                    uintptr_t ptr_val = (uintptr_t)va_arg(ap, void *);
                    *p++ = '0';
                    *p++ = 'x';

                    // 将指针值转换为16进制字符串
                    char buf[17]; // 64位指针最多16个十六进制数字
                    char *ptr = buf;
                    int digits = 0;
                    uintptr_t val = ptr_val;

                    do {
                        int digit = val % 16;
                        *ptr++ = (digit < 10) ? ('0' + digit) : ('a' + digit - 10);
                        val /= 16;
                        digits++;
                    } while (val > 0);

                    // 填充前导零，使总宽度为机器字长/4（64位系统为16，32位系统为8）
                    while (digits < sizeof(uintptr_t) * 2) {
                        *ptr++ = '0';
                        digits++;
                    }

                    *ptr-- = '\0';
                    // 反转字符串
                    char *start = buf;
                    while (start < ptr) {
                        char tmp = *start;
                        *start = *ptr;
                        *ptr = tmp;
                        start++;
                        ptr--;
                    }

                    strcpy(p, buf);
                    p += strlen(buf);
                    break;
            }
			case 'x': /* hexadecimal */ 
			{                    
					unsigned int hex_val = va_arg(ap, unsigned int);
                    char buf[9]; // 32位最多8个十六进制数字
                    char *ptr = buf;
                    int digits = 0;
                    unsigned int val = hex_val;
                    
                    do {
                        int digit = val % 16;
                        *ptr++ = (digit < 10) ? ('0' + digit) : ('a' + digit - 10);
                        val /= 16;
                        digits++;
                    } while (val > 0);
                    
                    // 填充前导零，使总宽度为8
                    while (digits < 8) {
                        *ptr++ = '0';
                        digits++;
                    }
                    
                    *ptr-- = '\0';
                    // 反转字符串
                    char *start = buf;
                    while (start < ptr) {
                        char tmp = *start;
                        *start = *ptr;
                        *ptr = tmp;
                        start++;
                        ptr--;
                    }
                    
                    strcpy(p, buf);
                    p += strlen(buf);
                    break;
                }
			default: 
			{
                *p++ = '%';
                *p++ = *fmt;
                break;
			}
			}
		fmt++;
		}
	}
	*p = '\0';
	return p - out;
	//panic("Not implemented");
}

int printf(const char *fmt, ...) {
	char buf[PRINTF_BUF_SIZE];
	va_list ap;
	va_start(ap, fmt);
	int ret = vsprintf(buf, fmt, ap);
	va_end(ap);

	if (ret > 0) 
	{
		for (int i = 0; i < ret; i++) 
		{
            char ch = buf[i];
            if (ch == '\n') 
			{
                putch('\r'); 
            }
            putch(ch); 
        }
    }

	return ret;
	//panic("Not implemented");
}


int sprintf(char *out, const char *fmt, ...) {
	va_list ap;
	int len = 0;
	va_start(ap, fmt);
	len = vsprintf(out, fmt, ap);
	va_end(ap);
	return len;
 	
	//panic("Not implemented");
}

int snprintf(char *out, size_t n, const char *fmt, ...) {
	panic("Not implemented");
}

int vsnprintf(char *out, size_t n, const char *fmt, va_list ap) {
	panic("Not implemented");
}

#endif
