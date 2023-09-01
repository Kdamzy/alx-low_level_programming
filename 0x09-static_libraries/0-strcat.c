#include "main.h"

/**
 * _strcat - A function that concatenates two strings.
 * @dest: The resulting string.
 * @src: The source string.
 * Return: A pointer to the resulting string dest.
 */

char *_strcat(char *dest, char *src)
{
	char *p = dest;

	/* Move the pointer to the end of the resulting string */
	while (*p)
		p++;

	/* Append the characters src to dest */
	while (*src)
	{
		*p = *src;
		src++;
		p++;
	}

	/* Add a null terminator at the end */
	*p = '\0';

	return (dest);
}
