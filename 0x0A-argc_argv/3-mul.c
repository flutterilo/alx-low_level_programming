#include <stdio.h>
#include <stdlib.h>

/**
* main - print result of multiplication
* @argc: number of arguments in command
* @argv: content of arguments in command
* Return: return always 0
*/

int main(int argc, __attribute__((unused)) char *argv[])
{
	if (argc != 3)
	{
		puts("Error");
		return (1);
	}
	printf("%d\n", atoi(argv[argc - 1]) * atoi(argv[argc - 2]));
	return (0);
}
