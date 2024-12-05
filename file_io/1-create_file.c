#include "main.h"
/**
 * create_file - function that create a file and read it
 * @filename: is the name of the file to create
 * @text_content: is a NULL terminated string to write to the file
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	int Write;
	int len;

	if (filename == NULL)
	return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 600);

	if (fd == -1)
	return (-1);

	if (text_content != NULL)
	{
		while (text_content[len])
		len++;
		Write = write(fd, text_content, len);
		if (Write == -1 || Write != len)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
