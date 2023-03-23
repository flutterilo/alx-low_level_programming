#include "main.h"

/**
 * print_most_numbers - check if character is uppercase
 */

void print_most_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		if (!(i == 4 || i == 2))
		{
			_putchar(i + '0');
		}
	}
	_putchar('\n');

}
