#include "main.h"

/**
* is_palindrome - check if the reverse string is the same string
* @s: string parameter
* Return: return 1 if string palindrome, 0 if not
*/

int is_palindrome(char *s)
{
	int i = 0;
	int length;

	length = length_string(s, i);

	return (check_is_palindrome(s, i, length - 1));
}

/**
* length_string - check if the reverse string is the same string
* @s: string parameter
* @i: int
* Return: return 1 if string palindrome, 0 if not
*/

int length_string(char *s, int i)
{
	if (s[i] == '\0')
		return (i);
	return (length_string(s, i + 1));
}

/**
* check_is_palindrome - check if the reverse string is the same string
* @s: string parameter
* @i: int
* @j: int
* Return: return 1 if string palindrome, 0 if not
*/


int check_is_palindrome(char *s, int i, int j)
{
	if (s[i] != s[j])
		return (0);
	if (i == j)
		return (1);
	if (s[i] == '\0')
		return (1);

	return (check_is_palindrome(s, i + 1, j - 1));
}
