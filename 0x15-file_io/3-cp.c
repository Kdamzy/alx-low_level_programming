#include <stdio.h>
#include <stdlib.h>
#include "main.h"

#define BUFFER_SIZE 1024

/**
 * error - Print an error message
 * @code: The exit code.
 * @message: The error message.
 */
void error(int code, const char *message)
{
	dprintf(STDERR_FILENO, "Error: %s\n", message);
	exit(code);
}

/**
 * open_f - Open a file with specified flags and mode.
 * @filename: The name of the file to open.
 * @flags: The flags to use when opening the file.
 * @mode: The file mode to set (used for creation).
 *
 * Return: The file descriptor on success
 */
int open_f(const char *filename, int flags, mode_t mode)
{
	int fd;

	fd = open(filename, flags, mode);
	if (fd == -1)
	{
		error(99, "Can't open file");
	}
	return (fd);
}

/**
 * create_buffer - Dynamically allocate memory for a buffer.
 *
 * Return: A pointer to the allocated buffer on success
 */
char *create_buffer()
{
	char *buffer = malloc(BUFFER_SIZE);

	if (buffer == NULL)
	{
		error(99, "Failed to allocate memory");
	}
	return (buffer);
}

/**
 * copy - Copy the content of one file to another.
 * @source: The path to the source file to be copied.
 * @destination: The path to the destination file
 *
 * Return: No return value. Exits with an error code on failure.
 */
void copy(const char *source, const char *destination)
{
	int fd_from, fd_to;
	ssize_t bytes_read, bytes_written;
	char *buffer;

	fd_from = open_f(source, O_RDONLY, 0);
	fd_to = open_f(destination, O_WRONLY | O_CREAT | O_TRUNC, 0664);

	buffer = create_buffer();
	while ((bytes_read = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
		bytes_written = write(fd_to, buffer, bytes_read);
		if (bytes_written == -1)
		{
			close(fd_from);
			close(fd_to);
			free(buffer);
			error(99, "Can't write to file");
		}
	}
	if (bytes_read == -1)
	{
		close(fd_from);
		close(fd_to);
		free(buffer);
		error(98, "Can't read from file");
	}
	close(fd_from);
	close(fd_to);
	free(buffer);
}

/**
 * main - Copy the content of one file to another.
 * @argc: The number of arguments.
 * @argv: An array of command-line arguments.
 *
 * Return: 0 on success, other exit codes on failure.
 */
int main(int argc, char *argv[])
{
	const char *source = argv[1];
	const char *destination = argv[2];

	if (argc != 3)
	{
		error(97, "Usage: cp file_from file_to");
	}
	copy(source, destination);

	return (0);
}
