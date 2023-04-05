#include "main.h"

/**
* factorial - caluculate factorial of giving number
* @n: numbre parameter
* Return: return result
*/

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n  == 0)
		return (1);
	return (n * factorial(n - 1));
}
