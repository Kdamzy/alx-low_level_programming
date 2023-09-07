#include "main.h"
#include <stdlib.h>

/**
 * _calloc - Allocates memory for an array and initializes it to zero
 * @nmemb: number of elements in the array
 * @size: The size of each element
 *
 * Return: A pointer to the allocated and initialized memory
 * or NULL if nmemb or size is 0, or malloc fails
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);

	if (ptr == NULL)
		return (NULL);

	/* Initialize allocated memory to zero */
	for (i = 0; i < nmemb * size; i++)
	{
		*((char *)ptr + i) = 0;
	}

	return (ptr);
}
