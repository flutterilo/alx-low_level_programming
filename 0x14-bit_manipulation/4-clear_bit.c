#include "main.h"

/**
* clear_bit - set bit to 0 at given index
* @n: the number base
* @index: index of bit to be set
* Return: return 1 if success else -1
*/

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(n) * 8)
		return (-1);
	*n = *n & ~(1 << index);
	return (1);
}
