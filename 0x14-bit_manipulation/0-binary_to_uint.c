#include "main.h"

/**
* binary_to_uint - function that convert binrary to unsigned int
* @b: string of 1 and 0
* Return: return converted number
*/

unsigned int binary_to_uint(const char *b)
{
	unsigned int sum = 0;

	if (!b)
		return (0);
	while (b)
	{
		sum += sum << 1 + b[i] - '0';
		b >>= 1;
	}
	return (sum);
}