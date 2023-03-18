#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - this function will get last digit
 * Description: this is description of function
 * Return: return 1
 */

int main(void)
{
	int digit_one, digit_two, digit_three;

	for (digit_one = 0; digit_one <= 7; ++digit_one)
	{
		for (digit_two = digit_one + 1; digit_two <= 8; ++digit_two)
		{
			for (digit_three = digit_two + 1; digit_three <= 9; ++digit_three)
			{
				putchar(digit_one + '0');
				putchar(digit_two + '0');
				putchar(digit_three + '0');
				if (digit_one == 7 && digit_two == 8 && digit_three == 9)
				{
				}
				else
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}

	putchar('\n');
	return (0);
}
