#include "main.h"

/**
 * _puts - Print a string followed by a new line.
 * @str: Pointer to the string to be printed.
 */
void _puts(char *str)
{
	while (*str)
	{
		_putchar(*str);
		str++;
	}

	_putchar('\n');
}
