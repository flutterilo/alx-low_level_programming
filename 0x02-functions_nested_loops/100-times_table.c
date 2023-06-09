#include "main.h"


/**
 * print_number - print number
 * @num: parameter num.
 * Return: return nothing
 */

void print_number(int num)
{
	if (num > 9 && num < 100)
	{
		_putchar(' ');
		_putchar(' ');
		_putchar((num / 10) + '0');
		_putchar((num % 10) + '0');
		_putchar(',');
	} else if (num >= 100)
	{
		_putchar(' ');
		_putchar((num / 100) + '0');
		_putchar(((num / 10) % 10) + '0');
		_putchar((num % 10) + '0');
		_putchar(',');
	} else
	{
		_putchar(' ');
		_putchar(' ');
		_putchar(' ');
		_putchar((num % 10) + '0');
		_putchar(',');
	}
}

/**
 * print_last_number - print time table
 * @num: parameter n.
 * Return: return nothing
 */

void print_last_number(int num)
{
	if (num > 9 && num < 100)
	{
		_putchar(' ');
		_putchar(' ');
		_putchar((num / 10) + '0');
		_putchar((num % 10) + '0');
	} else if (num >= 100)
	{
		_putchar(' ');
		_putchar((num / 100) + '0');
		_putchar(((num / 10) % 10) + '0');
		_putchar((num % 10) + '0');
	} else
	{
		_putchar(' ');
		_putchar(' ');
		_putchar(' ');
		_putchar((num % 10) + '0');
	}
}

/**
 * print_times_table - print time table
 * @n: parameter n.
 * Return: return nothing
 */

void print_times_table(int n)
{
	int first, tmp, inside;

	if (n > 0 && n <= 15)
	{
		tmp = 0;
		for (first = 0; first <= n; first++)
		{
			_putchar('0');
			_putchar(',');
			for (inside = 0; inside < n - 1; inside++)
			{
				print_number(tmp += first);
			}
			print_last_number(tmp += first);
			tmp = 0;
			_putchar('\n');
		}
	} else if (n == 0)
	{
		_putchar('0');
		_putchar('\n');
	}
}
