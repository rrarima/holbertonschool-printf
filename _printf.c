#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>
#include "main.h"

/**
 * _printf - function that produces output according to a format.
 * @format: the data type of the output required
 * Return: 0, for now.
*/
int _printf(const char *format, ...)
{
	va_list strings;
	int i;
	char *str;

	va_start(strings, format);
	i = 0;
	str = format;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i = i + 1;
	}
	va_end(strings);
	return(0);
}
