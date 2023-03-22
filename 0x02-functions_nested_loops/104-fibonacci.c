#include <stdio.h>

/**
 * main - print fibonacci numbers
 * Return: return number 0
 */

int main(void)
{
	long a = 0, b = 1, sum = 0;
	int i;

	for (i = 0; i < 98; i++)
	{
		sum = a + b;
		printf("%lu, ", sum);
		a = b;
		b = sum;
	}
	sum = a + b;
	printf("%lu\n", sum);
	return (0);
}
