#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 * Return: the int converted from the string
 */
int _atoi(char *s)
{
	int i, d, n, len, f, digit;

	i = 0;
	d = 0;
	n = 0;
	len = 0;
	f = 0;
	digit = 0;

	while (s[len] != '\0')
		len++;
	while (i < len && f == 0)
	{
		if (s[i] == '-')
			++d;

		if (s[i] >= '0' && s[i] <= '9')
		{
			digit = s[i] - '0';
			if (d % 2)
				digit = -digit;
			n = n * 10 + digit;
			f = 1;
			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
			f = 0;
		}
		i++;
	}
	if (f == 0)
		return (0);

	return (n);
}

/**
* _calloc - allocate memory for an array
* @nmemb: number of element
* @size: size of type
* Return: return point to array
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr, b = 0;
	unsigned int i = 0;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(size * nmemb);
	if (ptr == NULL)
		return (NULL);
	while (i < (size * nmemb))
	{
		ptr[i] = b;
		i++;
	}
	return (ptr);
}

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
	answer = _calloc(sizeof(int), (len1 + len2 + 10));
	s1 = malloc(sizeof(int) * len1 + 20);
	s2 = malloc(sizeof(int) * len2 + 20);
	if (answer == NULL || s1 == NULL || s2 == NULL)
	{
		printf("Error\n");
		exit(98);
	}
	for (i = len1 - 1; i >= 0; i--)
	{
		if (!(argv[1][i] >= '0' && argv[1][i] <= '9'))
		{
			printf("Error\n");
			exit(98);
		}
		s1[j++] = argv[1][i] - 48;
	}

	j = 0;
	for (i = len2 - 1; i >= 0; i--)
	{
		if (!(argv[2][i] >= '0' && argv[2][i] <= '9'))
		{
			printf("Error\n");
			exit(98);
		}
		s2[j++] = argv[2][i] - '0';
	}

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
