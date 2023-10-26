#include "main.h"

/**
 * get_bit - Return the value of a bit at a given index.
 * @n: The unsigned long integer in which to get the bit.
 * @index: The index of the bit starting from 0.
 *
 * Return: The value of the bit at index or -1 if an error occurred.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mir;

	mir = 1UL << index;
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	if (n & mir)
		return (1);
	else
		return (0);
}
