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
	int i = 0, coin = 0;

	if (argc != 2)
	{
		puts("Error");
		return (1);
	}
	if (atoi(argv[1]) < 0)
	{
		puts("0");
		return (1);
	}

	while ((i + 25) <= atoi(argv[1]))
	{
		i += 25;
		coin++;
	}
	while ((i + 10) <= atoi(argv[1]))
	{
		i += 10;
		coin++;
	}
	while ((i + 5) <= atoi(argv[1]))
	{
		i += 5;
		coin++;
	}
	while ((i + 2) <= atoi(argv[1]))
	{
		i += 2;
		coin++;
	}
	while ((i + 1) <= atoi(argv[1]))
	{
		i += 1;
		coin++;
	}
	printf("%d\n", coin);
	return (0);
}
