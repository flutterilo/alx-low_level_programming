#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * positive_or_negative - recongize if the variable positive or negative or null
 * Description: - description of task
 * Return: 1
 */
void positive_or_negative(int n)
{

	if (n > 0)
	{
		printf("%d is positive\n", n);
	} else if (n < 0)
	{
		printf("%d is negative\n", n);
	} else
	{
		printf("%d is zero\n", n);
	}
}
