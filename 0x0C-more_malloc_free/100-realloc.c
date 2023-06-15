#include "main.h"
#include <stdlib.h>

/**
* _realloc - realocates a memory block
* @ptr: pointer parameter
* @old_size: old size parameter
* @new_size: new size parameter
* Return: return pointer
*/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new_ptr, *old_ptr;
	unsigned int size, i = 0;

	if (new_size == old_size)
		return (ptr);
	size = new_size > old_size ? old_size : new_size;
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	printf("size is %d", size);
	printf("new_size is %d", new_size);
	if (ptr == NULL)
		new_ptr = malloc(new_size);
	else
		new_ptr = malloc(new_size);
	if (new_ptr == NULL)
		return (NULL);
	if (ptr == NULL)
		return (new_ptr);

	old_ptr = ptr;
	while (i < size)
	{
		new_ptr[i] = old_ptr[i];
		i++;
	}

	free(ptr);
	return (new_ptr);

}

