#include "main.h"

/**
* _power - cacluate power of number
* @a: number base
* @b: exponent number
* Return: return result
*/

int _power(int a, int b)
{
	int rst = a, i = 1;

	if (b == 0)
		return (1);
	while (i < b)
	{
		rst = rst * a;
		i++;
	}
	return (rst);
}

/**
* binary_to_uint - function that convert binrary to unsigned int
* @b: string of 1 and 0
* Return: return converted number
*/

unsigned int binary_to_uint(const char *b)
{
	unsigned int sum = 0, j = 0;
	int i = 0;

	if (!b)
		return (0);
	while (b[i] != '\0')
	{
		i++;
	}
	i--;
	while (i >= 0)
	{
		if (b[i] == '1' || b[i] == '0')
			sum += (b[i] - '0') * _power(2, j);
		else
			return (0);
		j++;
		i--;
	}
	return (sum);
}
