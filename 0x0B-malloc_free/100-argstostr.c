#include "main.h"
#include <stdlib.h>

/**
* argstostr - conconate all argument of program
* @ac: numbers of arguments
* @av: array of content
* Return: point to array
*/

char *argstostr(int ac, char **av)
{
	char *ptr;
	int i, j, k, b = 0;

	if (ac == 0 || av == NULL)
		return (NULL);
	k = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			k++;
		}
	}
	k += ac;
	ptr = malloc(sizeof(char) * k + 1);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			ptr[b] = av[i][j];
			b++;
		}
		ptr[b++] = '\n';
	}
	ptr[b++] = '\0';
	return (ptr);
}
