#include "main.h"

/**
* flip_bits - number of bits I have to flip from to another
* @n: first number
* @m: second number
* Return: return number of bits should be flip
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int times = 0;
	unsigned long int rst;

	rst = n ^ m;
	while (rst)
	{
		times += rst & 1;
		rst >>= 1;
	}
	return (times);
}
