#include "main.h"

int _printf(const char *format, ...)
{
	va_list ap;
	int i, count_char = 0;

	if (format == NULL)
	{
		return -1;
	}

	va_start(ap, format);

	i = 0;
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			count_char += find_char(ap, format[i + 1]);
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

int find_char(va_list ap, char c)
{
	int i = 0;
	format_t f[] = {
		{'c', print_c},
		{'s', print_s},
		{'i', print_i},
		{'%', print_percent},
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
	return (2);
}
