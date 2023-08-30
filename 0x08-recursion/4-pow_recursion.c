#include "main.h"

/**
 * _pow_recursion - Returns the value of x
 * raised to the power of y using recursion
 * @x: The base number
 * @y: The exponent
 *
 * Return: Value of x raised to the power of y, or -1 if y is negative
 */
int _pow_recursion(int x, int y)
{
	/* If y is negative, return -1 as an error indicator */
	if (y < 0)
		return (-1);

	/* Any number raised to the power of 0 is 1 */
	if (y == 0)
		return (1);

	/* Recursive call to calculate x^y */
	return (x * _pow_recursion(x, y - 1));
}
