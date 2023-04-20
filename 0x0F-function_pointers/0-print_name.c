#include "function_pointers.h"
#include <stdio.h>

/**
* print_name - printing name
* @name: name parameter
* @f: f parameter
*/

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
