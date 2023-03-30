#include "main.h"

/**
* rot13 - encode string using rot13
* @n: parameter n
* Return: return string
*/

char *rot13(char *n)
{
	int i, j;
	char *inp = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *out = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	i = 0;
	while (n[i] != '\0')
	{
		for(j = 0; j < 52; j++)
		{
			if (n[i] == inp[j])
			{
				n[i] = out[j];
				break;
			}
		}
		i++;
	}
	return (n);
}
