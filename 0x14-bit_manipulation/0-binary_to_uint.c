#include "main.h"

/**
* binary_to_uint - function that convert binrary to unsigned int
* @b: string of 1 and 0
* Return: return converted number
*/

unsigned int binary_to_uint(const char *b)
{
	unsigned int sum = 0, i = 0;

	while (b[i])
	{
		if (b[i] != '1' && b[i] != '0')
			return (0);
		sum = (sum << 1) + (b[i] - '0');
		i++;
	}
	return (sum);
}
