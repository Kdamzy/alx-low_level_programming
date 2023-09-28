#include "main.h"

/**
 * flip_bits - Returns the number of bits need to
 * flip to get one number from another
 * @n: The first unsigned long int.
 * @m: The second unsigned long int.
 *
 * Return: The number of bits needed to flip.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int flip_no;
	unsigned int num = 0;

	flip_no = n ^ m;

	while (flip_no > 0)
	{
		num += flip_no & 1;
		flip_no >>= 1;
	}
	return (num);
}
