#include "main.h"

/**
 * jack_bauer - print all day minute
 * Return: return nothing
 */

void jack_bauer(void)
{
	int first, second, thirt, fourth;

	for (first = 0; first <= 2; first++)
	{
		for (second = 0; second <= 3; second++)
		{
			for (thirt = 0; thirt <= 5; thirt++)
			{
				for (fourth = 0; fourth <= 9; fourth++)
				{
					_putchar(first + '0');
					_putchar(second + '0');
					_putchar(':');
					_putchar(thirt + '0');
					_putchar(fourth + '0');
					_putchar('\n');
				}
			}
		}
	}

}
