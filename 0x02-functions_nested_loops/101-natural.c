#include <stdio.h>

/**
 * main - printing sum of multiples 3 and 5
 * Return: always return 0.
 */

int main(void)
{
	int a, result = 0;

	for (a = 0; a < 1024; a++)
	{
		if ((a % 3) == 0 || (a % 5) == 0)
		{
			result += a;
		}
	}
	printf("%d\n", result);
	return (0);
}
