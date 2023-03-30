#include "main.h"

/**
* rot13 - encode string using rot13
* @n: parameter n
* Return: return string
*/

char *rot13(char *n)
{
	int i;

	i = 0;
	while (n[i] != '\0')
	{
		while ((n[i] <= 'z' && n[i] >= 'a') || (n[i] <= 'Z' && n[i] >= 'A'))
		{
			if (n[i] <= 'z' && n[i] >= 'a')
			{
				n[i] = n[i] >= 'n' ? n[i] - 13 : n[i] + 13;
				break;
			}
				n[i] = n[i] >= 'N' ? n[i] - 13 : n[i] + 13;
			break;
		}
		i++;
	}
	return (n);
}
