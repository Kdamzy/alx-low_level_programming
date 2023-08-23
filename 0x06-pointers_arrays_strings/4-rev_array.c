#include "main.h"

/**
 * reverse_array - Reverses the content of an array of integers.
 * @a: The array of integers.
 * @n: The number of elements in the array.
 */

void reverse_array(int *a, int n)
{
	int start = 0;
	int end = n - 1;
	int i;

	while (start < end)
	{
		/* Swap elements at start and end indices */
		i = a[start];
		a[start] = a[end];
		a[end] = i;

		/* Move indices towards the center */
		start++;
		end--;
	}
}
