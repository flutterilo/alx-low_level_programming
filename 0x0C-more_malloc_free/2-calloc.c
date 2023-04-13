#include "main.h"
#include <stdlib.h>

/**
* _calloc - allocate memory for an array
* @nmemb: number of element
* @size: size of type
* Return: return point to array
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *ptr;
	unsigned int i = 0;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = (int *)malloc(sizeof(size) * nmemb);
	if (ptr == NULL)
		return (NULL);
	while (i <= (size * nmemb))
	{
		ptr[i] = 0;
		i++;
	}
	return (ptr);
}
