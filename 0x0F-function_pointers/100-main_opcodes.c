#include <stdio.h>
#include <stdlib.h>

/**
* main - print opcode of its own main function
* @argc: number of arguments
* @argv: content of arguments
* Return: return depend on sucess
*/

int main(int argc, char *argv[])
{
	char *arr = (char *)main;
	int num;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	num = atoi(argv[1]);
	if (num < 0)
	{
		printf("Error\n");
		exit(2);
	}

	while (num--)
	{
		printf("%02hhx%c", *arr++, num ? ' ' : '\n');
	}
	return (0);
}
