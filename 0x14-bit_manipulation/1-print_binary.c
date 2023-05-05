#include "main.h"

/**
* print_binary - print binary representation of number
* @n: number parameter
*/

void print_binary(unsigned long int n)
{
	unsigned long int check = 1;
	int i = 0;

	while (check <= n)
	{
		check <<= 1;
		i++;
	}
	if (i)
		check >>= 1;
	while (check)
	{
		if (check & n)
			_putchar('1');
		else
			_putchar('0');
		check >>= 1;
	}
}
