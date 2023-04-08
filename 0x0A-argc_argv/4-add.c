#include <stdio.h>
#include <stdlib.h>

/**
* main - print result of odds positive numbers
* @argc: number of arguments in command
* @argv: content of arguments in command
* Return: return always 0
*/

int main(int argc, __attribute__((unused)) char *argv[])
{
	int i, j = 0, result = 0;

	if (argc == 1)
	{
		putchar('0');
		putchar('\n');
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		while (argv[i][j] != '\0')
		{
			if (argv[i][j] > '9' || argv[i][j] < '0')
			{
				puts("Error");
				return (1);
			}
			j++;
		}
		j = 0;
		result += atoi(argv[i]);
	}
	printf("%d\n", result);
	return (0);
}
