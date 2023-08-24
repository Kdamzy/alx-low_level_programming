#include "main.h"

/**
 * leet - Encodes a string into 1337.
 * @str: The string to encode.
 *
 * Return: A pointer to the encoded string.
 */

char *leet(char *str)
{
	int a, b;
	char c[] = "AEOTLaeotl";
	char d[] = "4307143071";

	/* Loop through the characters of the input string */
	for (a = 0; str[a]; a++)
	{
		/* Loop through the leet characters and their replacements */
		for (b = 0; c[b]; b++)
		{
			/* Check if the current character matches a leet character */
			if (str[a] == c[b])
			{
				/* Replace the character with the leet replacement */
				str[a] = d[b];
				break;
			}
		}
	}

	/* Return the encoded string */
	return (str);
}
