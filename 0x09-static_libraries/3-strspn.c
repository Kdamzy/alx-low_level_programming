#include "main.h"

/**
 *_strspn - Gets the length of a prefix substring
 * @s: Pointer to the string to search
 * @accept: Pointer to the string containing acceptable bytes
 *
 * Return: Number of bytes in the initial segment of s
 * consisting only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int a = 0;
	int b, i;

	while (*s)
	{
		b = 0;
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				a++;
				b = 1;
				break;
			}
		}

		if (!b)
			break;

		s++;
	}

	return (a);
}
