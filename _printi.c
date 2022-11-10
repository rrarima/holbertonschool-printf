#include "main.h"
/**
* _printi - prints ints
* @n: take unsigned int
* @count: store count
* Return: count
*/
int _printi(unsigned int n, int count)
{
	if (n /10 != 0)
	{
		count = 1 + _printi((n / 10), 0);
	}
	_putchar((n % 10) + '0');
	return (1 + count);
}
