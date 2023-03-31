#include "main.h"

/**
* *_strcat - concatenates two string
* @dest: parameter dest
* @src: parameter src
* Return: return pointer
*/

char *_strcat(char *dest, char *src)
{
	while (*dest != '\0')
	{
		dest++;
	}

	for (; *src != '\0'; src++)
	{
		*dest = *src;
		dest++;
	}

	return (dest);
}
