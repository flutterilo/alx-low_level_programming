#include "function_pointers.h"

/**
* int_index - function to search for integer
* @array: array parameter
* @size: size of array
* @cmp: function we will use
* Return: return index if correct else -1
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0, rst;

	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);

	while (i < size)
	{
		rst = cmp(array[i]);
		if (rst == 1)
			return (i);
		i++;
	}
	return (-1);

}
