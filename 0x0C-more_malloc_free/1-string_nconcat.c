#include "main.h"
#include <stdlib.h>

/**
* string_nconcat - concatenate two strings
* @s1: dest string
* @s2: source string
* @n: length of string
* Return: pointer to string
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int i = 0, j = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s2[j] != '\0')
		j++;
	if (n > (j + 1))
		n = j + 1;
	while (s1[i] != '\0')
		i++;
	ptr = malloc(sizeof(char) * i + n);
	if (ptr == NULL)
		return (NULL);
	i = 0;
	while (s1[i] != '\0')
	{
		ptr[i] = s1[i];
		i++;
	}
	j = 0;
	while (j < n)
	{
		ptr[i + j] = s2[j];
		j++;
	}
	ptr[i + j] = '\0';
	return (ptr);
}
