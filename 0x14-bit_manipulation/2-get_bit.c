#include "main.h"

/**
* get_bit - get a value of given index
* @n: number base
* @index: index of value
* Return: return value of index
*/

int get_bit(unsigned long int n, unsigned int index)
{
	if (index > sizeof(n) * 8)
		return (-1);
	return ((n >> index) & 1);
}
