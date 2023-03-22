#include "main.h"


/**
 * print_number - print number
 * @num: parameter num.
 * Return: return nothing
 */

void print_number(int num)
{
	if (num > 9)
	{
		_putchar(' ');
		_putchar((num / 10) + '0');
		_putchar((num % 10) + '0');
		_putchar(',');
	} else
	{
		_putchar(' ');
		_putchar(' ');
		_putchar((num % 10) + '0');
		_putchar(',');
	}
}


/**
 * times_table - print time table
 * Return: return nothing
 */

void times_table(void)
{
	int first, tmp;

	tmp = 0;
	for (first = 0; first <= 9; first++)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
		_putchar(' ');
		_putchar((tmp += first) + '0');
		_putchar(',');
		print_number(tmp += first);
		print_number(tmp += first);
		print_number(tmp += first);
		print_number(tmp += first);
		print_number(tmp += first);
		print_number(tmp += first);
		print_number(tmp += first);
		tmp += first;
		if (tmp > 9)
		{
			_putchar(' ');
			_putchar((tmp / 10) + '0');
			_putchar((tmp % 10) + '0');
		} else
		{
			_putchar(' ');
			_putchar(' ');
			_putchar(tmp + '0');
		}
		tmp = 0;
		_putchar('\n');
	}


}
