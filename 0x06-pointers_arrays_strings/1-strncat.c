#include "main.h"

/**
 * _strncat - A function that concatenates two strings,
 * using at most n bytes from src.
 * @dest: The resulting string.
 * @src: The source string.
 * @n: The maximum number of bytes from src to be appended.
 * Return: A pointer to the resulting string dest.
 */

char *_strncat(char *dest, char *src, int n)
{
	char *p_dest = dest;
	char *p_src = src;

	/* Move the resulting pointer to the end of dest */
	while (*p_dest)
		p_dest++;

	/* Copy at most n bytes from src to dest */
	while (*p_src && n > 0)
	{
		*p_dest = *p_src;
		p_dest++;
		p_src++;
		n--;
	}

	/* Add a null terminator at the end */
	*p_dest = '\0';

	return (dest);
}
