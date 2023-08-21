#include "main.h"

/**
 * print_rev - Print a string in reverse followed by a new line.
 * @s: Pointer to the string to be printed in reverse.
 */

void print_rev(char *s)
{
	int kenny = 0;

	int a

	while (s[kenny])
	{
		kenny++;
	}

	for (a = kenny - 1; a >= 0; a--)
	{
		_putchar(s[a]);
	}

	_putchar('\n');
}
