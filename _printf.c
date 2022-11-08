#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>
#include "main.h"

/**
 * _printf - function that produces output according to a format.
 * @format: the data type of the output required
 * Return: 0, for now.
*/
int _printf(const char *format, ...)
{
	va_list strings;
	char *str;

	va_start(strings, format);
	i = 0;
	str = (char *)format;
	/*
	while (str[i])
	{
		if (str[i] == '%')
		{
			if (str[i + 1] == 's')
			{
				str[i] =;insert string into the other string
				argCount = argCount + 1;
			}
			if (str[i + 1] == 'c')
			{
				;
			}
		}
		i = i + 1;
	}*/
	va_end(strings);
	return(printToScreen(str));
}
