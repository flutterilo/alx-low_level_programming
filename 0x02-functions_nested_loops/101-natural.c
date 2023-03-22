#include <stdio.h>

/**
 * main - printing sum of multiples 3 and 5
 * Return: always return 0.
 */

int main(void)
{
	int a, result;

	for (a = 0; a < 1024; a += 3)
	{
		result += a;
	}
	for (a = 0; a < 1024; a += 5)
	{
		result = result + a;
	}
	printf("%d\n", result);
	/*
	printf("%d\n", result1);
	for (b = 0; b < 10; b += 5)
	{
		result2 += b;
	}
	total = result1 + result2;
	printf("%d\n", result1);
	printf("%d\n", total);
	*/
	return (0);
}
