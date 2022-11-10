#include "main.h"

int print_c(va_list ap)
{
	return (_putchar(va_arg(ap, int)));
}

int print_s(va_list ap)
{
	char * str;

	str = va_arg(ap, char*); 
	if (str == NULL)
	{
		str = "(null)";
	}
       	return (_putstr(str));
}

int print_i(va_list ap)
{
	int num, count;
	unsigned int unum;

	count = 0;
	num = va_arg(ap, int);
	if (num < 0)
	{
		_putchar('-');
		unum = num * -1;
		count = count + 1;
	} else {
		unum = num;
	}

	count = count + _printi(unum, 0);
	return (count);
}

int print_percent(__attribute__((unused)) va_list ap)
{
	return (_putchar('%'));
}
