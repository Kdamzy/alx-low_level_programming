#include "main.h"

/**
 * rev_string - Reverse a string.
 * @s: Pointer to the string to be reversed.
 */

void rev_string(char *s)
{
	int a = 0;
	int b = 0;

	char damy;

	while (s[a] != '\0')
	{
		a++;
	}

	a--;

	while (b < a)
	{
		damy = s[b];
		s[b] = s[a];
		s[a] = damy;

		b++;
		a--;
	}
}
