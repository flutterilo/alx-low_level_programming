#include "main.h"

/**
* _strchr - locate charater in string
* @s: source
* @c: character
* Return: return pointer to the first occurence
*/

char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != c)
	{
		if (s[i] == '\0')
		{
			return (NULL);
		}
		i++;
	}
	return (s + i);
}
