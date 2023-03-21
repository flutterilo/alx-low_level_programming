#include "main.h"

/**
 * print_alphabet_x10 - print 10 times alphabet
 * Return: return nothing.
 */

void print_alphabet_x10(void)
{

	int loop = 0;
	char alpha = 'a';

	while (loop < 10)
	{
		while (alpha <= 'z')
		{
			_putchar(alpha);
			alpha++;
		}
		_putchar('\n');
		alpha = 'a';

	loop++;
	}

}
