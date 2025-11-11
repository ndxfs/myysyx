#include <klib.h>
#include <klib-macros.h>
#include <stdint.h>

#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)

size_t strlen(const char *s) {
	size_t len = 0;
	while (s[len] != '\0') len++;
	return len;
	//panic("Not implemented");
}

/*char *strcpy(char *dst, const char *src) {
	size_t i = 0;
	while (src[i] != '\0') {
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return dst;	
	//panic("Not implemented");
}*/


char *strcpy(char *dst, const char *src) {
	char *tmp = dst;
	while (*src != '\0') *dst++ = *src++;
	*dst = '\0';
	return tmp;	
	//panic("Not implemented");
}

//手册实现
char *strncpy(char *dst, const char *src, size_t n) {
	size_t i;
	for(i = 0; i < n && src[i] != '\0'; i++)
		dst[i] = src[i];
	for( ; i < n; i++)
		dst[i] = '\0';
	return dst;
	//panic("Not implemented");
}


char *strcat(char *dst, const char *src) {
	char *tmp = dst;
	dst += strlen(dst);
	while (*src != '\0') *dst++ = *src++;
	*dst = '\0';
	return tmp;
	//panic("Not implemented");
}

int strcmp(const char *s1, const char *s2) {
	while (*s1 && (*s1 == *s2)){
		s1++;
		s2++;
	}

	return *(unsigned char *)s1 - *(unsigned char *)s2;
	//panic("Not implemented");
}

int strncmp(const char *s1, const char *s2, size_t n) {
	if(n == 0) return 0;
	while (*s1 && (*s1 == *s2) && --n){
		s1++;
		s2++;
	}

	return *(unsigned char *)s1 - *(unsigned char *)s2; 
	//panic("Not implemented");
}

void *memset(void *s, int c, size_t n){
	char *tmp = (char *)s;
	c = c & 0xFF;
	while (n--){
		*tmp++ = c;
	}
	return s;
	//panic("Not implemented");
}

//允许overlap
void *memmove(void *dst, const void *src, size_t n) {	
	char *d = (char *)dst;
	const char *s = (const char *)src;
	if(d < s){
		while (n--) *d++ =*s++;
	}
	else {
		d += n;
		s += n;
		while (n--) *--d = *--s;
		
	}
	return dst;
	//panic("Not implemented");
}

void *memcpy(void *out, const void *in, size_t n) {
	char *o = (char *)out;
	const char *i = (const char *)in;
	while(n--){
		*o++ = *i++;
	}
	return out;
	//panic("Not implemented");
}

int memcmp(const void *s1, const void *s2, size_t n) {
	const char *ss1 = (const char *)s1;
	const char *ss2 = (const char *)s2;
	if(n == 0) return 0;
	while((*ss1 == *ss2) && --n){
		ss1++;
		ss2++;
	}
	return *(unsigned char *)ss1 - *(unsigned char *)ss2;
	//panic("Not implemented");
}

#endif
