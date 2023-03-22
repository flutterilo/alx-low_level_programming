#include <stdio.h>

/**
 * main - print 50 fabonici numbers
 * Return: return always 0
 */

int main(void)
{
	long i, a = 0, b = 1, sum;

	for (i = 1; i < 50; i++)
	{
		sum = a + b;
		printf("%lu, ", sum);
		a = b;
		b = sum;
	}
		sum = a + b;
		printf("%lu\n", sum);
		a = b;
		b = sum;
	printf("\n");
	return (0);
}
