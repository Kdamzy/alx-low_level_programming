#include "main.h"
#include <stdio.h>

/**
 * main - Prints the first 98 Fibonacci numbers
 *
 * Return: Always 0
 */
int main(void)
{
	unsigned long int a = 1, b = 2, next_term;
	int i;

	printf("%lu, %lu", a, b);
	for (i = 3; i <= 98; i++)
	{
		next_term = a + b;
		printf(", %lu", next_term);
		a = b;
		b = next_term;
	}
	printf("\n");

	return (0);
}
