#include "main.h"

/**
* is_prime_number - check if is prime number
* @n: number
* Return: return 0 if prime 1 if not
*/

int is_prime_number(int n)
{
	int a = 2;

	if (n <= 1)
		return (0);

	return (_check_prime_number(a, n));
}

/**
* _check_prime_number - check recusively
* @a: parameter a
* @n: actual number
* Return: return 0 if prime, 1 if not
*/

int _check_prime_number(int a, int n)
{
	if (a == n)
		return (1);
	if ((n % a) == 0)
		return (0);
	return (_check_prime_number(a + 1, n));
}
