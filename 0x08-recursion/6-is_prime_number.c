#include "main.h"

/**
 * is_prime_number - Checks if an integer is a prime number
 * @n: The integer to be checked
 *
 * Return: 1 if n is prime, 0 otherwise
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);

	return (is_prime_helper(n, 2));
}

/**
 * is_prime_helper - Recursive helper function to check primality
 * @n: The integer to be checked
 * @b: The current divisor being checked
 *
 * Return: 1 if n is prime, 0 otherwise
 */
int is_prime_helper(int n, int b)
{
	if (b >= n)
		return (1);

	if (n % b == 0)
		return (0);

	return (is_prime_helper(n, b + 1));
}
