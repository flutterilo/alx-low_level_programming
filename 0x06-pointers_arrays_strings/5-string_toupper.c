#include "main.h"

/**
* string_toupper - convert string to uppercase
* @n: parameter pointer
* Return: return pointer
*/

char *string_toupper(char *n)
{
	char *fst;

	fst = n;
	while (*n != '\n')
	{
		if (*n <= 'z' && *n >= 'a')
		{
			*n -= 32;
		}
		n++;
	}
	return (fst);
}
