#include "main.h"
/**
 * main - Prints the first 98 Fibonacci numbers
 *
 * Return: Always 0
 */
int main(void)
{
	unsigned long int a = 1, b = 2, next_term;
	int i;

	_putchar(a + '0');
	_putchar(',');
	_putchar(' ');
	_putchar(b + '0');

	for (i = 3; i <= 98; i++)
	{
		next_term = a + b;
		_putchar(',');
		_putchar(' ');
		if (next_term < 10)
			_putchar(' ');
		if (next_term < 100)
			_putchar(' ');
		if (next_term >= 10)
			_putchar((next_term / 10) + '0');
		_putchar((next_term % 10) + '0');

		a = b;
		b = next_term;
	}

	_putchar('\n');

	return (0);
}
