#include "main.h"
/**
 * _putstr - prints a string to standard output
 * @str: a string to be printed
 * Return - a count of characters printed
 */
int _putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i = i + 1;
	}
	return (i);
}
