#include <am.h>
#include <klib.h>
#include <klib-macros.h>
#include <stdarg.h>

#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)

int printf(const char *fmt, ...) {
	panic("Not implemented");
}

int vsprintf(char *out, const char *fmt, va_list ap) {
	panic("Not implemented");
}

int sprintf(char *out, const char *fmt, ...) {
	va_list ap;
	int d;
	char c;
	char *s;
	char *p = out;
	
	
	va_start(ap, fmt);
	while (*fmt){
		if(*fmt != '%')
			*p++ = *fmt++;
		else
		{
			switch (*++fmt) {
			case 's':/* string */
				s = va_arg(ap, char *);
				strcpy(p, s);
				p += strlen(s);
				break;
			case 'd':/* int */
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
			case 'c':/* char */
				/* need a cast here since va_arg only
				takes fully promoted types */
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
 	
	//panic("Not implemented");
}

int snprintf(char *out, size_t n, const char *fmt, ...) {
	panic("Not implemented");
}

int vsnprintf(char *out, size_t n, const char *fmt, va_list ap) {
	panic("Not implemented");
}

#endif
