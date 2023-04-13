#include "main.h"
#include <stdlib.h>

/**
* calculatewords - calculate words
* @str: string
* Return: return length
*/
int calculatewords(char *str)
{
	int i = 0, length = 0;

	while (str[i] != '\0')
	{
		if (str[i] != ' ')
		{
			while (str[i] != ' ')
			{
				if (str[i] == '\0')
					break;
				i++;
			}
			length += 1;
		}
		if (str[i] == '\0')
			break;
		i++;
	}
	return (length);
}

/**
* strtow - split string into words
* @str: string parameter
* Return: return pointer to array
*/

char **strtow(char *str)
{
	int length = 0;
	char **ptr;

	length = calculatewords(str);
	if (length == 0)
		return (NULL);
	ptr = (char **)malloc(sizeof(char *) * length + 1 + length);
	if (ptr == NULL)
		return (NULL);
	allocate_assign(str, ptr);
	return (ptr);
}

/**
* allocate_assign - allocate and assign
* @str: string
* @ptr: pointer
* Return: retunn pointer
*/

char **allocate_assign(char *str, char **ptr)
{
	int i = 0, k = 0, r = 0, z = 0;

	while (str[i] != '\0')
	{
		if (str[i] != ' ')
		{
			k = 0;
			while (str[i] != ' ')
			{
				if (str[i] == '\0')
					break;
				k++;
				i++;
			}
			ptr[r] = malloc(sizeof(char) * k + 1);
			if (ptr[r] == NULL)
			{
				while (r >= 0)
					free(ptr[r]);
				free(ptr);
				return (NULL);
			}
			z = 0;
			for (; k > 0; k--)
			{
				ptr[r][z] = str[i - k];
				z++;
			}
			r++;
			if (str[i] == '\0')
				break;
		}
		i++;
	}
	return (ptr);
}
