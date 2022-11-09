#include "main.h"

int print_c(va_list ap)
{
	return (_putchar(va_arg(ap, int)));
}

int print_s(va_list ap)
{
	_putstr(va_arg(ap, char*));
	return (1);
}

int print_i(va_list ap)
{
	int num;
	unsigned int unum;

	num = va_arg(ap, int);
	if (num < 0)
	{
		_putchar('-');
		unum = num * -1;
	} else {
		unum = num;
	}

	_printi(unum);
	return (42);
}

int print_percent(__attribute__((unused)) va_list ap)
{
	return (_putchar('%'));
}
