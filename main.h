#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>
#include <limits.h>

typedef struct
{
	char specifier;
	int (*func)(va_list ap);
} format_t;

int _putchar(char c);
int _putstr(char *);
int _printf(const char *format, ...);
int _printi(unsigned int n, int count);

int find_char(va_list ap, char c);

int print_c(va_list ap);
int print_s(va_list ap);
int print_i(va_list ap);
int print_percent(va_list ap);

#endif
