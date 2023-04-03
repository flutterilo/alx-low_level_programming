#include "main.h"

/**
* _strspn - get length of prefix substring
* @s: initial segment
* @accept: accepted bytes
* Return: return number of bytes
*/


unsigned int _strspn(char *s, char *accept)
{
	int i = 0, j = 0;

	while(s[i] != '\0')
	{
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				j = 0;
				break;
			}
			j++;
		}
		if (accept[j] == '\0')
			return (i);
		i++;
	}
	return (i);
}
