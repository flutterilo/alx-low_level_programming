#include "main.h"

/**
* leet - encodes string
* @n: parameter n
* Return: return string;
*/

char *leet(char *n)
{
	int i;

	i = 0;
	while (n[i] != '\0')
	{
		if (n[i] == 'a' || n[i] == 'A')
		{
			n[i] = '4';
		} else if (n[i] == 'e' || n[i] == 'E')
		{
			n[i] = '3';
		} else if (n[i] == 'o' || n[i] == 'O')
		{
			n[i] = '0';
		} else if (n[i] == 't' || n[i] == 'T')
		{
			n[i] = '7';
		} else if (n[i] == 'l' || n[i] == 'L')
		{
			n[i] = '1';
		}
		i++;
	}
	return (n);
}
