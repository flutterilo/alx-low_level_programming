#include "main.h"
#include <stdio.h>

/**
* print_diagsums - print the sum of two diagonals
* @a: parameter a
* @size: size
*/

void print_diagsums(int *a, int size)
{
	int i, diag1 = 0, diag2 = 0;
	int total_cell = (size * size) - 1;

	for (i = 0; i < size; i++)
	{
		diag1 += a[i * size + i];
	}
	for (i = size - 1; i >= 0; i--)
	{
		diag2 += a[i * size + (size - y - 1)]
	}

	/*
	* while (total_cell)
	*{
	*	diag1 += a[total_cell];
	*	total_cell -= size + 1;
	*}
	*total_cell = (size * size) - 1 - (size - 1);
	*while (total_cell)
	*{
	*	diag2 += a[total_cell];
	*	total_cell -= size - 1;
	*}
	*/
	printf("%d, %d\n", diag1, diag2);
}
