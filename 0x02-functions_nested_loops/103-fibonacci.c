#include <stdio.h>

/**
 * main - print 50 fabonici numbers
 * Return: return always 0
 */

int main(void)
{
	long a = 0, b = 1, sum;

	while ((a + b) < 4000000)
	{
		sum = a + b;
		a = b;
		b = sum;
	}
	printf("%lu\n", sum);
	return (0);
}
