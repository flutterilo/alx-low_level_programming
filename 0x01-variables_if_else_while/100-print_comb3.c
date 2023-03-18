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
	int i;
	int digit_two = 1;
	int j;

	for (i = 0; i <= 8; ++i)
	{
		for (j = digit_two; j <= 9; ++j)
		{
			putchar(i + '0');
			putchar(j + '0');
			if (i == 8 && j == 9)
			{
			}
			else
			{
				putchar(',');
				putchar(' ');
			}
		}
		digit_two++;
	}

	putchar('\n');
	return (0);
}
