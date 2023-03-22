#include <stdio.h>

/**
 * main - print 50 fabonici numbers
 * Return: return always 0
 */

int main(void)
{
	long a = 0, b = 1, sum, even_value = 0;

	while ((a + b) < 4000000)
	{
		sum = a + b;
		a = b;
		b = sum;
		if ((sum % 2) == 0)
		{
			even_value += sum;
		}
	}
	printf("%lu\n", even_value);
	return (0);
}
