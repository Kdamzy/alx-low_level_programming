#include "main.h"

/**
 * puts2 - Print every other character of a string, followed by a new line.
 * @str: Pointer to the string to be printed.
 */

void puts2(char *str)
{
	int ade = 0;

	while (str[ade] != '\0')
	{
		_putchar(str[ade]);
		ade += 2;
	}

	_putchar('\n');
}
