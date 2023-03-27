#include "main.h"
#include "string.h"

/**
* print_rev - printing in reverse way of string
* @s: parameter of string s
*/

void print_rev(char *s)
{
	int length;

	for (length = 0; s[length] != '\0'; ++length)
	{
	}
	while (length--)
	{
		_putchar(s[length]);
	}
	_putchar('\n');
}
