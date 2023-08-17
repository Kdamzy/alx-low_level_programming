#include "main.h"

/**
 * largest_number - Returns the largest of 3 numbers
 * @a: First integer
 * @b: Second integer
 * @c: Third integer
 *
 * Return: Largest number among a, b, and c
 */

int largest_number(int a, int b, int c)
{
	int largest;

	if (a > b && b > c)
	{
		largest = a;
	}
	else if (b > a && a > c)
	{
		largest = b;
	}
	else
	{
		largest = c;
	}

	return (largest);
}
