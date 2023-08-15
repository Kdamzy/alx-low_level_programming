#include "main.h"
/**
 * print_times_table - Prints the n times table
 * @n: The times table to print (up to 15)
 */
void print_times_table(int n)
{
	int a, d, e;

	if (n >= 0 && n <= 15)
	{
		for (a = 0, a <= n, a++)
		{
			for (d = 0, d <= n, d++)
			{
				e = d * a;
				if (d == 0)
				{
					_putchar(e + '0');
				}
				else if (e < 10 && d != 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar(e + '0');
				}
				else if (e >= 10 && e < 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar((e / 10) + '0');
					_putchar((e % 10) + '0');
				}
				else if (e >= 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar((e / 100) + '0');
					_putchar(((e % 10) % 10)
						+ '0');

					_putchar((e % 10) + '0');
				}
			}
			_putchar('\n');
		}
	}
}
