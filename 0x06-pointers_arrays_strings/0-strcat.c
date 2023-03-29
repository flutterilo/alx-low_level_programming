#include "main.h"

/**
* *_strcat - concatenates two string
* @dest: parameter dest
* @src: parameter src
* Return: return pointer
*/

char *_strcat(char *dest, char *src)
{
	char *fst;

	fst = dest;
	while (*dest != '\0')
	{
		dest++;
	}
	
	for (; *src != '\0'; src++)
	{
		*dest = *src;
		dest++;
	}

	*dest = '\0';

	return fst;
}
