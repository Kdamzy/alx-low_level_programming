#include "main.h"

/**
 * string_toupper -Function that changes all
 * lowercase letters of a string to uppercase.
 * @str: The string to modify.
 * Return: A pointer to the modified string.
 */
char *string_toupper(char *str)
{
	char *s = str;

	while (*s)
	{
		if (*s >= 'a' && *s <= 'z')
		{
			/* Convert lowercase letter to uppercase */
			*s = *s - 'a' + 'A';
		}
		s++;
	}

	return (str);
}
