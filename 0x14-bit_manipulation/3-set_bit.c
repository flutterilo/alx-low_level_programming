#include "main.h"

/**
* set_bit - set value of bit to one at given index
* @n: the number used
* @index: index of bit
* Return: return 1 if success else -1
*/

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(index) * 8)
		return (-1);
	*n = *n | (1 << index);
	return (1);
}
