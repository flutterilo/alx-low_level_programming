#include "function_pointers.h"

/**
* print_name - printing name
* @name: name parameter
* @f: f parameter
*/

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
