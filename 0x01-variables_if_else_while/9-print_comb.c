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

	for (i = 0; i <= 9; ++i)
	{
		putchar(i + '0');
		putchar(',');
		putchar(' ');
	}

	putchar('\n');
	return (0);
}
