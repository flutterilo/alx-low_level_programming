#include "main.h"

/**
 * _memset - fill momory with constant value
 * @s: pointer s
 * @n: const bytes
 * @b: constant bytes
 * Return: return pointer to the memory erea
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);

}
