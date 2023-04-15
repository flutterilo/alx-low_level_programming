#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
* multiplie_print - multiple and print
* @len1: len1
* @len2: len2
* @i: i
* @answer: answer
*/
void multiplie_print(int len1, int len2, int i, int *answer)
{
	int tmp;

	for (i = 0; i < len1 + len2 - 1; i++)
	{
		tmp = answer[i] / 10;
		answer[i] = answer[i] % 10;
		answer[i + 1] = answer[i + 1] + tmp;
	}
	for (i = len1 + len2 - 1; i >= 0; i--)
	{
		if (answer[i] != 0)
			break;
	}
	for (; i >= 0; i--)
	{
		printf("%d", answer[i]);
	}
	putchar('\n');
}

/**
* main - multiples two positive number
* @argc: number of arguments
* @argv: content of arguments
* Return: always return 0
*/

int main(int argc, char *argv[])
{
	int i, j = 0, len1, len2;
	int *s1, *s2, *answer;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	len1 = strlen(argv[1]);
	len2 = strlen(argv[2]);
	answer = calloc(sizeof(int), len1 + len2);
	s1 = malloc(sizeof(int) * len1 + 1);
	s2 = malloc(sizeof(int) * len2 + 1);
	if (answer == NULL || s1 == NULL || s2 == NULL)
	{
		printf("Error\n");
		exit(98);
	}
	for (i = len1 - 1; i >= 0; i--)
		s1[j++] = argv[1][i] - 48;

	j = 0;
	for (i = len2 - 1; i >= 0; i--)
		s2[j++] = argv[2][i] - '0';

	for (i = 0; i < len2; i++)
	{
		for (j = 0; j < len1; j++)
		{
			answer[i + j] = s1[j] * s2[i];
		}
	}
	multiplie_print(len1, len2, i, answer);
	return (0);
}
