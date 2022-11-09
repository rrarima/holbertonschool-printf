#include "main.h"

void _printi(unsigned int n)
{
	if (n > 9)
	{
		_printi(n/10);
	}

	_putchar ((n % 10) + '0');
}
