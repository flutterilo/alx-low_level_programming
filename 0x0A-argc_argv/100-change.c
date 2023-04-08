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
	int i = 0, result = 0, num = atoi(argv[1]);
	int coin[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		puts("Error");
		return (1);
	}
	if (num < 0)
	{
		puts("0");
		return (0);
	}
	for (i = 0; i < 5 && num > 0; i++)
	{
		while(num >= coin[i])
		{
			result++;
			num -= coin[i];
		}
	}
	printf("%d\n", result);
	return (0);
}

