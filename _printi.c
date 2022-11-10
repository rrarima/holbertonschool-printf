#include "main.h"

int _printi(unsigned int n, int count)
{
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
}
