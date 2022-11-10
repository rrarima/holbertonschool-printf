#include "main.h"
/**
* _printi - prints ints in any base below 10
* @n: take unsigned int
* @count: store count
* Return: count
*/
int _printi(unsigned int n, int base, int count)
{

	if (n != 0)
	{
		count = 1 + _printi((n/base), base, 0);
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
