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
	char *tems;

	for (length = 0; s[length] != '\0'; ++length)
	{
	}
	ptr = s;
	tems = s;
	_putchar('\n');
	while (length--)
	{
		*ptr = tems[length];
		_putchar(tems[length]);
		_putchar(*ptr);
		_putchar(' ');
		_putchar('\n');
		ptr++;
	}
}
