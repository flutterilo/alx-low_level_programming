#include "main.h"

/**
* _sqrt_recursion - calcuate sqaure of number
* @n: numbre parameter
* Return: return result
*/

int _sqrt_recursion(int n)
{
	int a = 0;
	if (n < 0)
		return -1;
	return _check_number(a, n);

}

/**
* _check_number - check number if square of n
* @a: added number
* @n: number parameter
* Return: return result;
*/

int _check_number(int a, int n)
{
	if ((a * a) > n)
		return (-1);
	if ((a * a) == n)
		return (a);
	return _check_number(a + 1, n);
}
