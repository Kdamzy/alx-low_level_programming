#include "main.h"

/**
 * _strlen - Calculate the length of a string.
 * @s: Pointer to the input string.
 *
 * Return: The length of the string.
 */

int _strlen(char *s)
{
	int length = 0;

	while (*s)
	{
		length++;
		s++;
	}

	return (length);
}

/**
 * puts_half - Print the second half of a string followed by a new line.
 * @str: Pointer to the string to be printed.
 */

void puts_half(char *str)
{
	int length = _strlen(str);
	int half_length;

	if (length % 2 == 0)
	{
		half_length = length / 2;
	}
	else
	{
		half_length = (length - 1) / 2;
	}

	while (str[length] != '\0')
	{
		_putchar(str[length]);
		length++;
	}

	_putchar('\n');
}
