#include "main.h"
#include "string.h"

/**
* rev_string - printing in reverse way of string
* @s: parameter of string s
*/

void rev_string(char *s)
{
	int length;
	char *ptr;
	char tems[10];

	for (length = 0; s[length] != '\0'; ++length)
	{
		tems[length] = s[length];
	}
	ptr = s;
	while (length--)
	{
		*ptr = tems[length];
		ptr++;
	}
}

