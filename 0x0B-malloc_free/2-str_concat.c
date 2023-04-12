#include "main.h"
#include <stdlib.h>

/**
* str_concat - conconating two string
* @s1: first string
* @s2: second string
* Return: return point to new string
*/

char *str_concat(char *s1, char *s2)
{
	char *ptr;
	int i = 0, j = 0, a = 0, b = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[i])
		i++;
	while (s2[j])
		j++;
	ptr = malloc(sizeof(char) * (i + 1 + j + 1));
	if (ptr == NULL)
		return NULL;
	while (a < i)
	{
		ptr[a] = s1[a];
		a++;
	}
	while (b < j)
	{
		ptr[b + i] = s2[b];
		b++;
	}
	return ptr;
}
