#include "main.h"

/**
* reverse_array - reversing array
* @a: parameter array
* @n: length parameter
*/

void reverse_array(int *a, int n)
{
	int rev, i = 0;

	n--;
	while (i <= n)
	{
		rev = a[i];
		a[i] = a[n];
		a[n] = rev;
		i++;
		n--;
	}
}
