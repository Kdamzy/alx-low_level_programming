#include "main.h"

/**
 * print_diagonal - Prints a diagonal line of backslashes with indentation
 * @n: The number of times the character '\\' should be printed
 */
void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
		return;
	}

	for (int row = 0; row < n; row++)
	{
		for (int spaces = 0; spaces < row; spaces++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
