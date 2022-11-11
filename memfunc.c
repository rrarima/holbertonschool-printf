#include "main.h"

/**
 * print_p - prints a pointer to std out
 * @ap: a pointer to be printed
 * Return: a count of chars printed
 */
int print_p(va_list ap)
{
	unsigned long int addr;

	addr = va_arg(ap, unsigned long int);
	if (addr)
	{
	_putchar('0');
	_putchar('x');
	return (_printi(addr, 16, 0) + 2);
	}
	else
	{
		_putstr("(nil)");
		return (5);
	}
}
