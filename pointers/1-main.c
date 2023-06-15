#include <stdio.h>

/**
* main - print pointers of values
* Return: always return 0
*/

int main(void)
{
	int n;
	int *p;

	n = 1995;
	p = &n;
	printf("size of n is %lu\n", sizeof(n));
	printf("Value of variable 'n' is : %d \n", n);
  printf("Address of variable 'n': %p\n", &n);
	printf("Value of variable 'p' is : %d \n", *p);
  printf("Address of variable 'p': %p\n", &p);
	*p = 2005;
	printf("value of 'p' after changed is : %d \n", *p);
	printf("value of 'n' after changed is : %d \n", n);
  return (0);
}
