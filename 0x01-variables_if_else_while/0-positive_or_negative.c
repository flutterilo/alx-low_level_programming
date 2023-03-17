#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - recongize if the variable positive or negative or null
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
	{
		printf("%d is positive", n);
	} else if (n < 0)
	{
		printf("%d is negative", n);
	} else
	{
		printf("%d is zero", n);
	}
	return (0);
}
