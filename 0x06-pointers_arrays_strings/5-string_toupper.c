#include "main.h"

/**
* string_toupper - convert string to uppercase
* @st: parameter pointer
* Return: return pointer
*/

char *string_toupper(char *st)
{
	char *fst;

	fst = st;
	while (*st != '\n')
	{
		if (*st <= 'z' && *st >= 'a')
		{
			*st -= 32;
		}
		st++;
	}
	return (fst);
}
