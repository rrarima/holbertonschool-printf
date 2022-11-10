#include "main.h"
/**
* _printi - prints ints
* @n: take unsigned int
* @count: store count
* Return: count
*/
int _printi(unsigned int n, int count)
{
<<<<<<< HEAD
	if (n != 0)
	{
		count = 1 + _printi((n / 10), 0);
		_putchar('0' + (n % 10));
		return (count);
	}
	else
	{
		return (count);
	}
>>>>>>> matt
}
