#include <stdio.h>

/**
 * main - fizz buzz
 * Return: return always 0
 */

int main(void)
{
	int i;

	for (i = 1; i <= n; i++)
	{
		if (i % 15 == 0)
		{
			printf("FizzBuzz ");
		}
		else if ((i % 3) == 0)
		{
			printf("Fizz ");
		}
		else if ((i % 5) == 0)
		{
			printf("Buzz ");
		}
		else
		{
			printf("%d ", i);
		}
	}
	return (0);
}
