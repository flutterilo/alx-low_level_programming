#include "variadic_functions.h"
#include <stdarg.h>

/**
* sum_them_all - sum of all parameters
* @n: first parameter
* Return: return sum
*/

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	int sum = 0;
	unsigned int i = 0;

	if (n == 0)
		return (0);
	va_start(ap, n);
	while (i < n)
	{
		sum += va_arg(ap, int);
		i++;
	}
	va_end(ap);

	return (sum);
}
