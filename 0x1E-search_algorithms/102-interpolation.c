#include "search_algos.h"

/**
  * interpolation_search - Searches for a value in a sorted array
  * @array: A pointer to the first element of the array
  * @size: The number of elements in the array.
  * @value: The value to search for.
  *
  * Return: If the value is not present or the array is NULL, -1.
  */
int interpolation_search(int *array, size_t size, int value)
{
	size_t inter, lef, rig;

	if (array == NULL)
		return (-1);

	for (lef = 0, rig = size - 1; rig >= lef;)
	{
		inter = lef + (((double)(rig - lef) / (array[rig] - array[lef])) * (value - array[lef]));
		if (inter < size)
			printf("Value checked array[%ld] = [%d]\n", inter, array[inter]);
		else
		{
			printf("Value checked array[%ld] is out of range\n", inter);
			break;
		}

		if (array[inter] == value)
			return (inter);
		if (array[inter] > value)
			rig = inter - 1;
		else
			lef = inter + 1;
	}

	return (-1);
}
