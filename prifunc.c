#include <unistd.h>
#include "main.h"

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int print_c(va_list ap)
{
	_putchar(va_arg(ap, int));
	return (1);
}

/**
 * printToScreen - prints a string to standard output
 * @str: a string to be printed
 * Return - a count of characters printed
 */


int print_s(va_list ap)
{
	_putstr(va_arg(ap, char*));
	return (1);
}
