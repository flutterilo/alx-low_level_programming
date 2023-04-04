#include "main.h"
#include <stdio.h>

/**
* print_diagsums - print the sum of two diagonals
* @a: parameter a
* @size: size
*/

void print_diagsums(int *a, int size)
{
	int diag1 = 0, diag2 = 0;
	int total_cell = (size * size) - 1;

	while (total_cell)
	{
		diag1 += a[total_cell];
		total_cell -= size + 1;
	}
	total_cell = (size * size) - 1 - (size - 1);
	while (total_cell)
	{
		diag2 += a[total_cell];
		total_cell -= size - 1;
	}
	printf("%d, %d\n", diag1, diag2);
}
