#include "main.h"
#include <stdlib.h>

/**
* create_array - create array of char
* @size: size of array
* @c: char will be in array
* Return: return pointer to array
*/

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ptr = malloc(sizeof(c) * size);

	for (i = 0; i < size; i++)
	{
		ptr[i] = c;
	}

	return (ptr);
}
