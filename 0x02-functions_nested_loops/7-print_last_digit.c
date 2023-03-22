#include "main.h"
#include <stdlib.h>

/**
 * print_last_digit - printing last digit
 * @n: parameter type int
 * Return: return last digit
 */

int print_last_digit(int n)
{
	int abs_value, last_digit;

	abs_value = abs(n);
	last_digit = abs_value % 10;
	_putchar(last_digit + '0');
	return (last_digit);
}
