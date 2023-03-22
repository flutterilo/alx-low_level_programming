#include "main.h"

/**
 * main - printing abs and last digit of number
 * Return: return always 0
 */

int main(void)
{
	int r;

	print_last_digit(98);
	print_last_digit(0);
	r = print_last_digit(-1024);
	_putchar('0' + r);
	_putchar('\n');
	return (0);

}
