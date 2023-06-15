#include <stdio.h>

/**
* main - printing size of variables
* Return: return always 0
*/

int main(void)
{
	int n;

	printf("Size of type 'char' on my comupter is : %lu \n", sizeof(char));
	printf("Size of type 'int' on my computer is : %lu \n", sizeof(int));
	printf("Size of type 'float' on my computer is : %lu \n", sizeof(float));
	printf("Size of type of my variable on my computer is : %lu \n", sizeof(n));
	return (0);
}
