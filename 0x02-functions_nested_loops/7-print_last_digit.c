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

	last_digit = n % 10;
	abs_value = abs(last_digit);
	_putchar(abs_value + '0');
	return (abs_value);
}
