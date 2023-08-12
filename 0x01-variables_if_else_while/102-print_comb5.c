#include <stdio.h>
/**
  * main - Prints 3 combination of numbers
  *
  * Return: Always (Success)
  */
int main(void)
{
	int c, a, s, e;

	for (c = 48; c <= 57; c++)
	{
		for (a = 48; a <= 57; a++)
		{
			for (s = 48; s <= 57; s++)
			{
				for (e = 48; e <= 57; e++)
				{
					if (((s + e) > (c + a) &&  s >= c) || c < s)
					{
						putchar(c);
						putchar(a);
						putchar(' ');
						putchar(s);
						putchar(e);

					if (c + a + s + e == 227 && c == 57)
					{
					break;
					}
					else
					{
					putchar(',');
					putchar(' ');
					}
					}
				}
			}
		}
	}

	putchar('\n');
	return (0);
}
