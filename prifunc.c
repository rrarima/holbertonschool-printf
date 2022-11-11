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
	char *str;

	str = va_arg(ap, char*);
	if (str == NULL)
	{
		str = "(null)";
	}
	return (_putstr(str));
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
/**
* print_S - print S var
* @ap: va_list that holds arguments from main func
* Return: i
*/
int print_S(va_list ap)
{
	int i = 0;
	int x;
	char *str = va_arg(ap, char *);

	if (str == NULL)
	{
		str = "(null)";
	}


	while (str[i] != '\0')
	{
		x = str[i];
		if (x == 92 || str[i + 1] == 'n')
		{
			_putchar('x');
			_putchar('0');
			_putchar('A');
			i = i + 1;
		}
		else
		{
			_putchar(str[i]);
			i = i + 1;
		}
	}
	return (i);
}
/**
 * print_p -
 *
 *
 */
int print_p(va_list ap)
{
	unsigned long int addr;
	_putchar('0');
	_putchar('x');
	addr = va_arg(ap, unsigned long int);
	return (_printi(addr, 16, 0));

}
  /**
  * print_r - function to reverse string
  * @r: string to print
  * Return: number of printed characters
  */
  int print_r(va_list ap)
  {
	char *str;
	int i = 0;
	int count = 0;

	str = va_arg(ap , char *);

	if (str == NULL)
	{
		str = ")llun(";
	}

	while (str[i])
	{
		i = i + 1;
	}

	i = i - 1;
	while (i >= 0)
	{
		putchar(str[i]);
		i = i - 1;
		count = count + 1;
	}

	return (count);
}
