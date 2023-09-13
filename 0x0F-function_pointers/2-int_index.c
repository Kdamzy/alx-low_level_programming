#include "function_pointers.h"
/**
 * int_index - function that search for integers
 * @array: array
 * @size: size of elements in array
 * @cmp: pointer to the function to be used to compare values
 * Return: -1 if size <= 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int c;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (c = 0; c < size; c++)
	{
		if (cmp(array[c]))
			return (c);
	}
	return (-1);
}
