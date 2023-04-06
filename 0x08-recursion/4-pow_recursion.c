#include "main.h"

/**
* _pow_recursion - calculate power of number
* @x: parameter of value
* @: raised to power parameter
* Return: return result
*/

int _pow_recursion(int x, int y)
{
	if ( y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
