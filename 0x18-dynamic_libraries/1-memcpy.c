#include "main.h"

/**
* _memcpy - copie momery area
* @dest: destination parameter
* @src: source parameter
* @n: bytes of memory
* Return: return dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
