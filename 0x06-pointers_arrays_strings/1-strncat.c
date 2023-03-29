#include "main.h"

/**
* *_strcat - concatenates two string
* @dest: parameter dest
* @src: parameter src
* @n: number of bytes will used
* Return: return pointer
*/

char *_strncat(char *dest, char *src, int n)
{
	char *fst;
	int gt = 1;

	fst = dest;
	while (*dest != '\0')
	{
		dest++;
	}
	for (; *src != '\0'; src++)
	{
		*dest = *src;
		dest++;
		if(gt == n)
		{
			break;
		}
		gt++;
	}

	*dest = '\0';

	return (fst);
}
