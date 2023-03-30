#include "main.h"
/**
 * cap_string - change all lowercase to uppercase
 * @n: pointer
 * Return: n
 */
char *cap_string(char *n)
{
	int i;

	i = 0;
	while (n[i] != '\0')
	{
		if (n[0] >= 'a' && n[0] <= 'z')
		{
			n[0] = n[0] - 32;
		}
		if (
			n[i] == ' ' ||
			n[i] == '\n' ||
			n[i] == '\t' ||
			n[i] == '!' ||
			n[i] == ',' ||
			n[i] == '.' ||
			n[i] == ';' ||
			n[i] == '?' ||
			n[i] == '"' ||
			n[i] == '(' ||
			n[i] == ')' ||
			n[i] == '{' ||
			n[i] == '}'
		)
		{
			if (n[i + 1] >= 'a' && n[i + 1] <= 'z')
			{
				n[i + 1] = n[i + 1] - 32;
			}
		}
		i++;
	}
	return (n);
}
