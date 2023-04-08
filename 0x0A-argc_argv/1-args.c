#include <stdio.h>

/**
* main - print number of arguments
* @argc: number of arguments in command
* @argv: content of arguments in command
* Return: return always 0
*/

int main(int argc, __attribute__((unused)) char *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
