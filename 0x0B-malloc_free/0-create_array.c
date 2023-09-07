#include <stdlib.h>
#include "main.h"

/**
 * create_array - Creates an array of characters
 * and initializes it with a specific character.
 * @size: Size of the character array to create.
 * @c: character with which to initialize the array.
 *
 * Return:  pointer to the initialized array,
 * or NULL if allocation fails or size is 0.
 */
char *create_array(unsigned int size, char c)
{
	unsigned int a;
	char *ptr;

	ptr = malloc(size * sizeof(char));
	if (size == 0 || ptr == NULL)
		return (NULL);

	for (a = 0; a < size; a++)
		ptr[a] = c;

	return (ptr);
}
