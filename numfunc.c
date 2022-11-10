#include "main.h"
/**
* print_i - prints ints
* @ap: va_list that holds arguments from main func
* Return: number of ints
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
		return(1);
	}
	else
	{
		count = count + _printi(unum, 10, 0);
		return (count);
	}
}

/**
 * print_b
 * @ap:
 * Return: count of chars printed
 */
int print_b(va_list ap)
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
		return(1);
	}
	else
	{
		count = count + _printi(unum, 2, 0);
		return (count);
	}

}

/**
 * print_b
 * @ap:
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
		return(1);
	}
	else
	{
		count = count + _printi(num, 8, 0);
		return (count);
	}

}

/**
 * print_b
 * @ap:
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
		return(1);
	}
	else
	{
		count = count + _printi(num, 10, 0);
		return (count);
	}

}
/**
 * print_b
 * @ap:
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
		return(1);
	}
	else
	{
		count = count + _printi(num, 16, 0);
		return (count);
	}

}
