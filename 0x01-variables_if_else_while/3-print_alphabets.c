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
	char i;

	for (i = 'a'; i <= 'z'; ++i)
	{
		putchar(i);
	}
	for (i = 'A'; i <= 'Z'; ++i)
	{
		putchar(i);
	}

	putchar('\n');
	return (0);
}
