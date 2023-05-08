#include "main.h"

/**
* create_file - function that create file and put content inside it
* @filename: file name
* @text_content: content to put in file
* Return: return 1 if success else -1
*/

int create_file(const char *filename, char *text_content)
{
	int fd;
	size_t i = 0;

	if (!filename)
		return (-1);
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	if (text_content)
	{
		while (text_content[i])
			i++;
		if (write(3, text_content, i) == -1)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);

}
