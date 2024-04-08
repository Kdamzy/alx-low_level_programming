#include "search_algos.h"

/**
  * linear_search - Searches for a value in an array
  * @array: A pointer to the first element of the array
  * @size: The number of elements in the array.
  * @value: The value to search for.
  *
  * Return: first index if value is located or NULL if otherwise
  */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (value == array[i])
			return (i);
	}

	return (-1);
}