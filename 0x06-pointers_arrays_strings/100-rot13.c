#include "main.h"

/**
 * rot13 - Encodes a string using rot13.
 * @str: The string to encode.
 *
 * Return: A pointer to the encoded string.
 */

char *rot13(char *str)
{
	int a, b;
	char c[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char d[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	/* Loop through the characters of the input string */
	for (a = 0; str[a]; a++)
	{
		/* Loop through the normal and rot13 arrays to find the match */
		for (b = 0; c[b]; b++)
		{
			/* Check if the current character matches */
			if (str[a] == c[b])
			{
				str[a] = d[b];
				break;
			}
		}
	}

	return (str);
}
