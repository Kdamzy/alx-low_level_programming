#include "main.h"

/**
 * factorial - Returns the factorial of a given number
 * @n: The number to calculate the factorial for
 *
 * Return: Factorial of n, or -1 if n is negative
 */
int factorial(int n)
{
	/* Return -1 for negative input as an error indicator */
	if (n < 0)
		return (-1);

	/* factorial of 0 is 1 */
	if (n == 0)
		return (1);
	/* Recursive call to calculate factorial */
	return (n * factorial(n - 1));
}
