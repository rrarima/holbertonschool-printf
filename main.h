#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>
#include <limits.h>

/**
* struct format - structure that maps format specifier to func
* @specifier: format specifier
* @func: function to be called
*/
typedef struct format
{
	char specifier;
	int (*func)(va_list ap);
} format_t;

int _putchar(char c);
int _putstr(char *);
int _printf(const char *format, ...);
int _printi(unsigned long int n, int base, int count);
int _printi_cap(unsigned long int n, int base, int count);
int find_char(va_list ap, char c);

int print_c(va_list ap);
int print_s(va_list ap);
int print_i(va_list ap);
int print_b(va_list ap);
int print_o(va_list ap);
int print_u(va_list ap);
int print_x(va_list ap);
int print_x_cap(va_list ap);
int print_percent(va_list ap);
int print_S(va_list ap);
int print_p(va_list ap);
int print_r(va_list ap);

#endif
