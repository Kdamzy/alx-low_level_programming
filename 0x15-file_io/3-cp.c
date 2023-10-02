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
 * main - Copy the content of one file to another.
 * @argc: The number of arguments.
 * @argv: An array of command-line arguments.
 *
 * Return: 0 on success, other exit codes on failure.
 */
int main(int argc, char *argv[])
{
	int from, to;
	ssize_t bytes_read, bytes_written;
	char buffer[BUFFER_SIZE];

	if (argc != 3)
	{
		error(97, "Usage: cp file_from file_to");
	}
	from = open(argv[1], O_RDONLY);
	if (from == -1)
	{
		error(98, "Can't read from file");
	}
	to = open(argv[2],
			O_WRONLY | O_CREAT | O_TRUNC,
			S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
	if (to == -1)
	{
		error(99, "Can't write to file");
	}
	while ((bytes_read = read(from, buffer, BUFFER_SIZE)) > 0)
	{
		bytes_written = write(to, buffer, bytes_read);
		if (bytes_written == -1)
		{
			error(99, "Can't write to file");
		}
	}
	if (bytes_read == -1)
	{
		error(98, "Can't read from file");
	}
	if (close(from) == -1)
	{
		error(100, "Can't close fd");
	}
	if (close(to) == -1)
	{
		error(100, "Can't close fd");
	}
	return (0);
}
