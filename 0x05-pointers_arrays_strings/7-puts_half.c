#include "main.h"

/**
 * puts_half - Print the second half of a string followed by a new line.
 * @str: Pointer to the string to be printed.
 */

void puts_half(char *str)
{
	int length, half_length;

	length = 0;
	while (str[length] != '\0';
		length++;
	half_length = length / 2;

	if (length % 2 == 1)
		half_length++;

	while (half_length < length)
	{
		_putchar(str[half_length]);
		half_length++;
	}

	_putchar('\n');
}
