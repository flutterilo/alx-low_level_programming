#include "main.h"

/**
 * main - print 1 if character else 0
 * Return: return always 0
 */

int main(void)
{
	int r;

	r = _isalpha('h');
	_putchar(r + '0');
	r = _isalpha('h');
	_putchar(r + '0');
	r = _isalpha('o');
	_putchar(r + '0');
	r = _isalpha(108);
	_putchar(r + '0');
	r = _isalpha(';');
	_putchar(r + '0');
	_putchar('\n');
	return (0);
}
