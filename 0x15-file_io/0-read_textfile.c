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
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	str = malloc(sizeof(char) * letters);
	if (str == NULL)
	{
		close(fd);
		return (0);
	}
	check_r = read(fd, str, letters);
	if (check_r == -1)
	{
		free(str);
		close(fd);
		return (0);
	}
	check_w = write(STDOUT_FILENO, str, letters);
	free(str);
	close(fd);
	if (check_w == -1)
	{
		return (0);
	}
	return (check_r);
}
