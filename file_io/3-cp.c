#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

#define BUFFER_SIZE	1024

/**
 * exit_error - function to print error message and exit
 * @code: code
 * @error_message: error message displayed
 * @filename: name of the file
 * Return - Nothing
 */

void exit_error(int code, const char *error_message, const char *filename)
{
	dprintf(STDERR_FILENO, error_message, filename);
	exit(code);
}

/**
 * main - Copy content of one file to another
 * @argc: Argument count
 * @argv: Argument vector
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	int fd_from;
	int fd_to;
	int Read;
	int Write;
	char buffer[BUFFER_SIZE];

	if (argc != 3)
	exit_error(97, "Usage: cp file_from file_to\n", "");

	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
	exit_error(98, "Error: Can't read from file %s\n", argv[1]);

	fd_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fd_to == -1)
	exit_error(99, "Error: Can't write to %s\n", argv[2]);

	while ((Read = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
		Write = write(fd_to, buffer, Read);
		if (Write == -1 || Write != Read)
		exit_error(99, "Error: Can't write to %s\n", argv[2]);
	}
	if (Read == -1)
	exit_error(98, "Error: Can't read from file %s\n", argv[1]);

	if (close(fd_from) == -1)
	exit_error(100, "Error: Can't close fd %d\n", argv[1]);

	if (close(fd_to) == -1)
	exit_error(100, "Error: Can't close fd %d\n", argv[2]);

	return (0);
}
