#include "main.h"

/**
 * print_number - Prints an integer using _putchar.
 * @n: The integer to print.
 */

void print_number(int n)
{
	unsigned int a;

	a = n;

	if (n < 0)
	{
		_putchar('-');
		a = -n;
	}

	if (a / 10 != 0)
		print_number(a / 10);

	_putchar((a % 10) + '0');
}
