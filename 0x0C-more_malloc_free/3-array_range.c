#include "main.h"
#include <stdlib.h>

/**
 * array_range - Creates an array of integers from min to max
 * @min: minimum value
 * @max: maximum value
 *
 * Return: A pointer to the newly created array
 * or NULL if min > max or if malloc fails
 */
int *array_range(int min, int max)
{
	int *arr;
	int num, i;

	if (min > max)
		return (NULL);

	num = max - min + 1;

	arr = malloc(num * sizeof(int));

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < num; i++)
	{
		arr[i] = min;
		min++;
	}
	return (arr);
}
