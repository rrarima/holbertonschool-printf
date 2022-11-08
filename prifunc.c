#include <unistd.h>
#include "main.h"

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * printToScreen - prints a string to standard output
 * @str: a string to be printed
 * Return - a count of characters printed
 */
int printToScreen (char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i = i + 1;
	}
	return(i);
}

int print_c (va_list strings)
{
	int c;

	c = va_arg(strings, int);
	_putchar(c);
	return (1);
}
