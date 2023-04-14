#include "main.h"
#include <stdlib.h>

/**
* array_range - create array of integers
* @min: value min
* @max: value max
* Return: pointer to array type int
*/

int *array_range(int min, int max)
{
	int *ptr;
	int size, i = 0;

	if (min > max)
		return (NULL);
	size = max - min;
	ptr = malloc(sizeof(int) * size + 1);
	if (ptr == NULL)
		return (NULL);
	while (min < max)
		ptr[i++] = min++;
	return (ptr);
}
