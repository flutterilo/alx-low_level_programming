#include "main.h"

/**
 * sum_multiples - printing sum of multiples 3 and 5
 * Return: return nothing 
 */

void sum_multiples(void)
{
	int a, b, result1, result2, total;
	for(a = 0; a < 1024; a += 3)
	{
		result1 += a;
	}
	for(b = 0; b < 1024; b += 5)
	{
		result2 += b;
	}
	total = result1 + result2;
	printf("%d", total);

}
