#include "main.h"

/**
 * _isdigit - check if character is uppercase
 * @c: c is paramemter
 * Return: return 1 if uppcase and 0 otherwise
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}

	return (0);

}
