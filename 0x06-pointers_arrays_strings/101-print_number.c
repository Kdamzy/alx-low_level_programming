#include "main.h"

/**
 * print_number - Prints an integer using _putchar.
 * @n: The integer to print.
 */

void print_number(int n)
{
	int a, b, c, d;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	d = n % 10;
	c = ((n / 10) % 10);
	b = ((n / 100) % 10);
	a = ((n / 1000) % 10);

	if (a != 0)
		_putchar(a + '0');
	if (a != 0 || b != 0)
		_putchar(b + '0');
	if (a != 0 || b != 0 || c != 0)
		_putchar(c + '0');
	_putchar(d + '0');
}
