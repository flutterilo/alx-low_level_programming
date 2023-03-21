#include "main.h"

/**
 * _islower - only lowercases are allowed
 * Description: this is description
 * @c: description parameter
 * Return: return value 0 or 1.
 */

int _islower(int c)
{

	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);
}
