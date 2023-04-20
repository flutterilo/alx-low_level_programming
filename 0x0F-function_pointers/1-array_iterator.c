#include "function_pointers.h"


/**
* array_iterator - excute a function given as a parameter
* @array: array parameter
* @size: size of array
* @action: function to excute
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	if (array == NULL || action == NULL)
		return;

	while (i < size)
	{
		action(array[i]);
		i++;
	}
}
