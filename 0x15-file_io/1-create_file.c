#include <unistd.h>
#include <fcntl.h>
#include "main.h"
#include <string.h>

/**
 * create_file - Creates a file and writes text content in it.
 * @filename: pointer to the name of the file to be created.
 * @text_content: pointer to the content you want to write to the file
 *
 * Return: 1 on success, -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t bytes;

	if (filename == NULL)
	{
		return (-1);
	}

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		bytes = write(fd, text_content, strlen(text_content));
		if (bytes == -1)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
