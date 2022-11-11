#include "main.h"
/**
* print_c - prints a char to std out
* @ap: a char to be printed
* Return: a count of chars printed
*/
int print_c(va_list ap)
{
	return (_putchar(va_arg(ap, int)));
}

/**
* print_s - prints a string to std out
* @ap: a string to be printed
* Return: count of chars printed
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
* print_percent - prints the '%' char
* @ap: var unused
* Return: cout of chars printed
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
 * print_r -prints a string in reverse to std out
 * @ap: a string to be printed backwards
 * Return: a count of chars printed
 */
int print_r(va_list ap)
{
	char *str;
	int i = 0;
	int count = 0;

	str = va_arg(ap, char *);

	while(str[i] != '\0')
	{
		i = i + 1;
	}
	i = i - 1;

	while(i >= 0)
	{
		_putchar(str[i]);
		count = count + 1;
		i = i - 1;
	}
	return (count);
}
