#include "main.h"
/**
* print_c - print chars
* @ap: va_list that holds arguments from main func
* Return: number of chars
*/
int print_c(va_list ap)
{
	return (_putchar(va_arg(ap, int)));
}

/**
* print_s - print strings
* @ap: va_list that holds arguments from main func
* Return: number of chars
*/
int print_s(va_list ap)
{
	return (_putstr(va_arg(ap, char*)));
}

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

	count = count + _printi(unum, 0);
	return (count);
}

/**
* print_percent - prints percent
* @ap: va_list that holds arguments from main func
* Return: %
*/
int print_percent(__attribute__((unused)) va_list ap)
{
	return (_putchar('%'));
}
