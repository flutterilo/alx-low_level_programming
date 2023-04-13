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
	unsigned int i = 0, j = 0, len1 = 0, len2 = 0;

	while (s1 && s1[len1])
		len1++;
	while (s2 && s2[len2])
		len2++;
	if (n < len2)
		ptr = malloc(sizeof(char) * (len1 + n + 1));
	else
		ptr = malloc(sizeof(char) * (len1 + len2 + 1));
	if (ptr == NULL)
		return (NULL);
	i = 0;
	while (i < len1)
	{
		ptr[i] = s1[i];
		i++;
	}
	while (i < (len1 + n) && n < len2)
		ptr[i++] = s2[j++];
	ptr[i] = '\0';
	return (ptr);
}
