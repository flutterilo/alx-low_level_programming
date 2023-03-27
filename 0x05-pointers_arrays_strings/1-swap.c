#include "main.h"

/**
* swap_int - swapping two numbers
* @a: pointer parameter a
* @b: pointer parameter b
*/

void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;

}
