#include "main.h"

/**
* _strstr - locates a substring
* @haystack: source
* @needle: needle source
* Return: return pointer to the beginning of the located substring
*/

char *_strstr(char *haystack, char *needle)
{
	int i = 0, j = 0;

	while (haystack[i] != '\0')
	{
		while (needle[j] != '\0')
		{
			if (haystack[i] != needle[j])
			{
				j = 0;
				break;
			}
			j++;
		}
		if (needle[j] == '\0')
			return (needle);
		i++;
	}
	return (NULL);
}
