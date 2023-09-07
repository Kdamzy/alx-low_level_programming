#include "main.h"

/**
 * _sqrt_recursion - Returns the natural
 * square root of a number using recursion
 * @n: The number to calculate the square root for
 *
 * Return: Natural square root of n,
 * or -1 if n does not have a natural square root
 */
int _sqrt_recursion(int n)
{
	return (_sqrt_helper(n, 1));
}

/**
 * _sqrt_helper - Recursive helper function to calculate square root
 * @n: The number to calculate the square root for
 * @a: The current guess for the square root
 *
 * Return: Natural square root of n, or -1 if not found
 */
int _sqrt_helper(int n, int a)
{
	if (a * a == n)
		return (a);

	if (a * a > n)
		return (-1);

	return (_sqrt_helper(n, a + 1));
}
