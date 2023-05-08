#include "main.h"

/**
* read_textfile - read text file and print to the standart output
* @letters: number of little it's should read and print
* @filename: file name
* Return: actual number it's could print and returned
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd, check_r, check_w;
	char *str;

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
	check_r = read(fd, str, letters);
	if (check_r == -1)
	{
		free(str);
		close(fd);
		return (-1);
	}
	check_w = write(STDOUT_FILENO, str, letters);
	free(str);
	if (check_w == -1)
		return (-1);
	if (close(fd) < 0)
		return (-1);
	return (check_r);
}
