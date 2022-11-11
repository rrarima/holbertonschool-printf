#include "main.h"
/**
* _printf - function that prints variable number of arguments
* of different data types
* @format: input that contains various arguments.
* Return: subsequent arguments
*/
int _printf(const char *format, ...)
{
	va_list ap;
	int i, count_char = 0;

	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
	{
		return (-1);
	}

	va_start(ap, format);

	i = 0;
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			count_char = count_char + find_char(ap, format[i + 1]);
			i = i + 1;
		}
		else
		{
			count_char = count_char + 1;
			_putchar(format[i]);
		}
		i = i + 1;
	}
	va_end(ap);
	return (count_char);
}
/**
* find_char - store format specifiers to functions
* @ap: va_list that contains args
* @c: char
* Return: 2 (number of chars printed)
*/
int find_char(va_list ap, char c)
{
	int i = 0;
	format_t f[] = {
		{'c', print_c},
		{'s', print_s},
		{'i', print_i},
		{'d', print_i},
		{'%', print_percent},
		{'b', print_b},
		{'o', print_o},
		{'u', print_u},
		{'x', print_x},
		{'X', print_x_cap},
		{'S', print_S},
		{'p', print_p},
		{'r', print_r},
		{'\0', NULL}
	};

	while (f[i].func != NULL)
	{
		if (f[i].specifier == c)
		{
			return (f[i].func(ap));
		}
		i = i + 1;
	}
	_putchar('%');
	_putchar(c);
	return (2);
}
