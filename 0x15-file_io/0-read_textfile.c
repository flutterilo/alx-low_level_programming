#include "main.h"

/**
* read_textfile - read text file and print to the standart output
* @letters: number of little it's should read and print
* @filename: file name
* Return: actual number it's could print and returned
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd, i = 0, num = 0;
	char *str;
	int checklen;

	if (!filename)
		return (-1);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (-1);
	str = malloc(sizeof(char) * letters);
	if (str == NULL)
	{
		close(fd);
		return (-1);
	}
	checklen = read(fd, str, letters);
	if (checklen == -1)
	{
		free(str);
		return (-1);
	}

	while (str[i])
	{
		num += _putchar(str[i]);
		i++;
	}
	free(str);
	if (close(fd) < 0)
		return (-1);
	return (num);
}
