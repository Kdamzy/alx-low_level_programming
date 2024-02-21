#include "main.h"

/**
 * _strcpy - Copy the string pointed to by src
 * to the buffer pointed to by dest.
 * @dest: Pointer to the destination buffer.
 * @src: Pointer to the source string to be copied.
 *
 * Return: The pointer to the destination buffer.
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	dest[i] = '\0'; /* Add the terminating null byte */

	return (dest);
}
