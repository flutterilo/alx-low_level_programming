#include "main.h"

/**
 * _isupper - check if character is uppercase
 * @c: c is paramemter
 * Return: return 1 if uppcase and 0 otherwise
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}

	return (0);

}
