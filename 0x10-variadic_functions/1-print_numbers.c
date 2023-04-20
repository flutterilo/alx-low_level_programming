#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
* char_num_print - print number using _putchar
* @num: number parameter
*/

void char_num_print(int num)
{
	if (num < 0)
	{
		_putchar ('-');
		num *= -1;
	}
	if (num / 10)
		char_num_print(num / 10);
	_putchar((num % 10) + '0');
}

/**
* print_numbers - print numbers followed by new line
* @separator: string separtor parameter
* @n: number of parameters
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list nums;
	unsigned int i, j;

	va_start(nums, n);

	for (i = 0; i < n; i++)
	{
		j = 0;
		if (i == (n - 1))
		{
			char_num_print(va_arg(nums, int));
			continue;
		}
		char_num_print(va_arg(nums, int));
		while (separator[j] && separator != NULL)
			_putchar(separator[j++]);

	}
	_putchar('\n');
	va_end(nums);
}
