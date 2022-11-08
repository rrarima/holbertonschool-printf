#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>
#include "main.h"

/**
 * printToScreen - prints a string to standard output
 * @str: a string to be printed
 * Return - a count of characters printed
 */
int printToScreen (char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i = i + 1;
	}
	return(i);
}

/**
 * _printf - function that produces output according to a format.
 * @format: the data type of the output required
 * Return: 0, for now.
*/
int _printf(const char *format, ...)
{
	va_list strings;
	int i, k;
	char *str;

	va_start(strings, format);
	i = 0;
	str = (char *)format;
	/*
	while (str[k])
	{
		if (str[k] == '%' && str[k + 1] == 's')
		{
			;
		}
	        else if ()
		{
			;
		}
	}*/

	va_end(strings);
	return(printToScreen(str));
}
