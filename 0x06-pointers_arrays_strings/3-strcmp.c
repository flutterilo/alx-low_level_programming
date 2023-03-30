#include "main.h"

/**
* _strcmp - comare two strings
* @s1: parameter fisrt string
* @s2: parameter second string
* Return: return int value
*/

int _strcmp(char *s1, char *s2)
{

	while (*s1 != '\0' || *s2 != '\0')
	{
		if (*s1 != *s2)
		{
			return (*s1 - *s2);
		}
		s1++;
		s2++;
	}

	return (*s1 - *s2);
}
