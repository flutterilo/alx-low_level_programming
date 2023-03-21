#include "main.h"

/**
 * print_sign - print depend on cases
 * @n: value of charater
 * Return: return depend on casjes
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	} else if (n == 0)
	{
		_putchar('+');
		return (0);
	}
	_putchar('-');
	return (-1);
}
