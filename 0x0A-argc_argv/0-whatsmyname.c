#include <stdio.h>

/**
* main - print name of file
* @argc: number of arguments in command
* @argv: content of arguments
* Return: return always 0
*/

int main(int argc, char *argv[])
{
	printf("%s\n", argv[argc - 1]);
	return (0);
}
