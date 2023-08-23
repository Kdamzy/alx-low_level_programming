#include "main.h"

/**
 * _strncpy - Copies up to n bytes of the src string to dest.
 * @dest: The resulting string.
 * @src: The source string.
 * @n: The maximum number of bytes to copy from src.
 * Return: A pointer to the resulting string dest.
 */

char *_strncpy(char *dest, char *src, int n)
{
	char *p_dest = dest;
	char *p_src = src;

	/* Copy up to n bytes from src to dest */
	while (*p_src && n > 0)
	{
		*p_dest = *p_src;
		p_dest++;
		p_src++;
		n--;
	}

	/* Fill any remaining space with null characters */
	while (n > 0)
	{
		*p_dest = '\0';
		p_dest++;
		n--;
	}

	return (dest);
}
