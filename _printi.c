#include "main.h"
/**
* _printi - prints an int in any base below base 37
* @n: takes an unsigned int
* @count: count of chars printed
* @base: the base required for the number to be printed in
* Return: count
*/
int _printi(unsigned long int n, int base, int count)
{

	if (n != 0)
	{
		count = 1 + _printi((n / base), base, 0);
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
 * print_x_cap - prints an int in any base below 37
 * prints alpha chars in upper case
 * parent function to _prnti_cap
 * @ap: an
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
		return (1);
	}
	else
	{
		count = count + _printi_cap(num, 16, 0);
		return (count);
	}

}

/**
* _printi_cap - prints an int in any base below base 37
* alpha chars are printed in upper cas
* @n: takes an unsigned int
* @count: count of chars printed
* @base: the base required for the number to be printed in
* Return: count
*/
int _printi_cap(unsigned long int n, int base, int count)
{
	if (n != 0)
	{
		count = 1 + _printi_cap((n / base), base, 0);
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
