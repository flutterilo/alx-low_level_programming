#include "main.h"

/**
* append_text_to_file - append text at the end of the file
* @filename: file name
* @text_content: content to be added
* Return: return 1 if success else -1
*/

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, i = 0;

	if (!filename)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	if (text_content)
	{
		while (text_content[i])
			i++;
		if (write(fd, text_content, i) == -1)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
