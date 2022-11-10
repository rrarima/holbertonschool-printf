#include <unistd.h>
#include "main.h"
/**
* _putchar - print chars
* @c: takes char
* Return: char
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}
