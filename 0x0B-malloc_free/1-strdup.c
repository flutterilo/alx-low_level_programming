#include "main.h"
#include <stdlib.h>

/**
* _strdup - copy string to dynamic memory
* @str: string parameter
* Return: return pointer to string
*/

char *_strdup(char *str)
{
	char *ptr;
	int i = 0, j;

	if (str == NULL)
		return (NULL);
	while (str[i] != '\0')
		i++;
	ptr = malloc(sizeof(char) * (i + 1));
	if (ptr == NULL)
		return (NULL);
	for (j = 0; j < i; j++)
	{
		ptr[j] = str[j];
	}
	return (ptr);
}
