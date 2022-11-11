#include "main.h"
/**
* print_i - prints an int in base 10 to std out
* @ap: an integer to be printed
* Return: count of chars printed
*/
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
	}
	else
	{
		unum = num;
	}
	if (num == 0)
	{
		_putchar('0');
		return (1);
	}
	else
	{
		count = count + _printi(unum, 10, 0);
		return (count);
	}
}

/**
 * print_b - prints an int in base 2 to std out
 * @ap: an int to be printed
 * Return: count of chars printed
 */
int print_b(va_list ap)
{
	int count;
	unsigned int unum;

	count = 0;
	unum = va_arg(ap, int);
	if (unum == 0)
	{
		_putchar('0');
		return (1);
	}
	else
	{
		count = count + _printi(unum, 2, 0);
		return (count);
	}

}

/**
 * print_o - prints an int in base 8 to std out
 * @ap: an int to be printed
 * Return: count of chars printed
 */
int print_o(va_list ap)
{
	int count;
	unsigned int num;

	count = 0;
	num = va_arg(ap, int);
	if (num == 0)
	{
		_putchar('0');
		return (1);
	}
	else
	{
		count = count + _printi(num, 8, 0);
		return (count);
	}

}

/**
 * print_u - prints an unsigned int in base 10 to std out
 * @ap: an int to be printed
 * Return: count of chars printed
 */
int print_u(va_list ap)
{
	int count;
	unsigned int num;

	count = 0;
	num = va_arg(ap, int);
	if (num == 0)
	{
		_putchar('0');
		return (1);
	}
	else
	{
		count = count + _printi(num, 10, 0);
		return (count);
	}

}

/**
 * print_x - prints an int in base 16 to std out
 * @ap: an int to be printed
 * Return: count of chars printed
 */
int print_x(va_list ap)
{
	int count;
	unsigned int num;

	count = 0;
	num = va_arg(ap, int);
	if (num == 0)
	{
		_putchar('0');
		return (1);
	}
	else
	{
		count = count + _printi(num, 16, 0);
		return (count);
	}

}
