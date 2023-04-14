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
	char *ptr, b = 0;
	unsigned int i = 0;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(size * nmemb);
	if (ptr == NULL)
		return (NULL);
	while (i < (size * nmemb))
	{
		ptr[i] = b;
		i++;
	}
	return (ptr);
}
