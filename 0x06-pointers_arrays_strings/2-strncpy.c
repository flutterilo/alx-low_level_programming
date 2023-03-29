#include "main.h"

/**
* *_strncpy - concatenates two string
* @dest: parameter dest
* @src: parameter src
* @n: number of bytes will used
* Return: return pointer
*/

char *_strncpy(char *dest, char *src, int n)
{
	int j;

	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[j] = src[j];
		j++;
	}
	while (j < n)
	{
		dest[j] = '\0';
		j++;
	}
	return (dest);
}
