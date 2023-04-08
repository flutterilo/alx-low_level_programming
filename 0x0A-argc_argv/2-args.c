#include <stdio.h>

/**
* main - print all arguments
* @argc: number of arguments in command
* @argv: content of arguments in command
* Return: return always 0
*/

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);

	/**
		* char *s = argv[argc - 1];
	*
		* if (s == NULL)
		* return (0);
	* printf("%s\n", s);
	* main(argc + 1, argv);
	* return (0);
	*/
}
