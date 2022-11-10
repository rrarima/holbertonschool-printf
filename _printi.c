#include "main.h"
/**
* _printi - prints ints in any base below 10
* @n: take unsigned int
* @count: store count
* Return: count
*/
int _printi(unsigned int n, int base, int count)
{

	if (n != 0)
	{
		count = 1 + _printi((n/base), base, 0);
		if (n % base < 10)
		{
			_putchar('0' + n % base);
		}
		else
		{
			_putchar('a' + (n % base) - 10);
		}
	}
	return (count);
}

/**
 * print_x
 * @ap:
 * Return: count of chars printed
 */
int print_x_cap(va_list ap)
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
		count = count + _printi_cap(num, 16, 0);
		return (count);
	}

}

/**
* _printi - prints ints in any base below 10
* @n: take unsigned int
* @count: store count
* Return: count
*/
int _printi_cap(unsigned int n, int base, int count)
{
	if (n !=0)
	{
		count = 1 + _printi((n/base), base, 0);
		if (n % base < 10)
		{
			_putchar('0' + n % base);
		}
		else
		{
			_putchar('A' + (n % base) - 10);
		}
	}
		return (count);
}
