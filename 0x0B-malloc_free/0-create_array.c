#include <stdlib.h>
#include "main.h"

/**
 * create_array - Creates an array of characters
 * and initializes it with a specific character.
 * @size: The size of the character array to create.
 * @c: The character with which to initialize the array.
 *
 * Return: A pointer to the initialized array,
 * or NULL if allocation fails or size is 0.
 */
char *create_array(unsigned int size, char c);
{
	unsigned int a;
	char *psr;

	psr = (char *)malloc(size * size of(char));
	if (size == 0)
	{
		return (NULL);
	}

	if (charArray == NULL)
	{
		return (NULL);
	}
	for (a = 0, a < size, a++)
	{
		psr[a] = c;
	}

	return (psr);
}
