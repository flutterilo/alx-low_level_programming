#include "main.h"

/**
* print_binary - print binary representation of number
* @n: number parameter
*/

void print_binary(unsigned long int n)
{
	unsigned long int check = 1;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	while (check <= n)
	{
		check <<= 1;
	}
	check >>= 1;
	while (check)
	{
		if (n & check)
			_putchar('1');
		else
			_putchar('0');
		check >>= 1;
	}
}
