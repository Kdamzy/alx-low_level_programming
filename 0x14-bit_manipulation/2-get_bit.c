#include "main.h"

/**
 * get_bit - Returns the value of a bit at a given index.
 * @n: The unsigned long integer
 * @index: The index of the bit to be retrieve, starting from 0
 *
 * Return: The value of the bit at index index
 * or -1 if an error occurred.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mir;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	mir = 1UL << index;

	if (n & mir)
		return (1);
	else
		return (0);
}