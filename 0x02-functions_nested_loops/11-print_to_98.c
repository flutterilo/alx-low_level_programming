#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - print all nature number to 98
 * @n: parameter n
 */

void print_to_98(int n)
{
	int i;

	if (n > 98)
	{
		for (i = n; i > 98; i--)
		{
			printf("%d, ", i);
		}
		printf("%d", i);
		printf("\n");
	} else if (n < 98)
	{
		for (i = n; i < 98; i++)
		{
			printf("%d, ", i);
		}
		printf("%d", i);
		printf("\n");
	} else
	{
		i = n;
		printf("%d", i);
		printf("\n");
	}

}
