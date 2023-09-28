#include "main.h"

/**
 * binary_to_uint - Converts a binary string to an unsigned int.
 * @b: pointer to the string composed of '0' and '1' characters
 *
 * Return: The converted unsigned integer, or 0 if
 * there's one or more character in a string or 1 if b is NULL.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int a = 0;

	if (b == NULL)
		return (0);

	while (*b)
	{
		if (*b != '0' && *b != '1')
			return (0);

		a = a * 2 + (*b - '0');
		b++;
	}
	return (a);
}
