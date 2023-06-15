#include "main.h"

/**
* _strpbrk - searches a string for any of a set of bytes
* @s: initial segment
* @accept: accepted bytes
* Return: return point to first bytes in s that match bytes in accept
*/

char *_strpbrk(char *s, char *accept)
{
	int i = 0, j = 0;

	while (s[i] != '\0')
	{
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
				return (s + i);
			j++;
		}
		j = 0;
		i++;
	}
	return (NULL);
}
