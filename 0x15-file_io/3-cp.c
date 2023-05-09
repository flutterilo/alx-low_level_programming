#include "main.h"
#include <stdio.h>

/**
* fd_r_error - print error and exit
* @file_name: name of the file
*/
void fd_r_error(char *file_name)
{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_name);
		exit(98);
}

/**
* fd_w_error - print error and exit
* @file_name: name of the file
*/
void fd_w_error(char *file_name)
{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_name);
		exit(99);
}



/**
* main - copie content of file to another
* @argc: number of arguments
* @argv: content of arguments
* Return: return depend on success or not
*/

int main(int argc, char *argv[])
{
	int fd_r, fd_w;
	ssize_t check_r, check_w;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd_r = open(argv[1], O_RDONLY);
	if (fd_r == -1)
		fd_r_error(argv[1]);
	fd_w = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	if (fd_w == -1)
		fd_w_error(argv[2]);
	check_r = 1024;
	while (check_r == 1024)
	{
		check_r = read(fd_r, buffer, 1024);
		if (check_r == -1)
			fd_r_error(argv[1]);
		check_w = write(fd_w, buffer, check_r);
		if (check_w == -1)
			fd_w_error(argv[2]);
	}
	if (close(fd_r) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_r);
		exit(100);
	}
	if (close(fd_w) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_w);
		exit(100);
	}
	return (0);
}
