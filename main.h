#ifndef main_h
#define main_h

#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>

/**
 * struct strprt - Argument type and string to print
 *
 * @letter: Type of argument 
 * @f: Function associated
 */
typedef struct strprt
{
	char *specifier;
	int (*f)(va_list args);
} strprt_t;

int _printf(const char *format, ...);
int _putchar(char c);
int get_printf_func(va_list args, char spec);
int print_c(va_list args);
int print_p(va_list args);
int print_s(va_list args);

#endif
