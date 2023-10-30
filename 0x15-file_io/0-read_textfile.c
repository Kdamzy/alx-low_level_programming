#include "main.h"

/**
 * read_textfile - Reads a text file and prints it to STDOUT
 * @filename: The name of the file to be read.
 * @letters: The number of letters to read and print.
 *
 * Return: The actual number of letters read and printed,
 * return 0 If the file can't be opened or read,
 * or if the filename is null, or if write fails
 * or doesn't write the expected amount of bytes.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffs;
	ssize_t fd;
	ssize_t read_byte;
	ssize_t bytes_written;

	if (filename == NULL)
	{
		return (0);
	}
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		return (0);
	}
	buffs = malloc(letters);
	if (buffs == NULL)
	{
		close(fd);
		return (0);
	}
	read_byte = read(fd, buffs, letters);
	if (read_byte <= 0)
	{
		free(buffs);
		close(fd);
		return (0);
	}
	bytes_written = write(STDOUT_FILENO, buffs, read_byte);
	free(buffs);
	close(fd);

	if (bytes_written == read_byte)
	{
		return (bytes_written);
	}
	else
	{
		return (0);
	}
}
