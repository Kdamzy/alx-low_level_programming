#include "main.h"

/**
 * _strchr - Locates a character in a string
 * @s: Pointer to the string
 * @c: Character to be located
 *
 * Return: Pointer to the first occurrence of c in s, or NULL if not found
 */
char *_strchr(char *s, char c)
{
	int b;

	for (b = 0; s[b] >= '\0'; b++)
	{
		if (s[b] == c)
			return (s + b);
	}

		return ('\0');
}
