#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - Allocates a two dimensional array of integers
 * and initializes it to 0.
 * @width: The width of the grid.
 * @height: The height of the grid.
 *
 * Return: pointer to the allocated grid on success, or NULL on failure.
 */
int **alloc_grid(int width, int height)
{
	int **ptr;
	int a, b;

	if (width <= 0 || height <= 0)
		return (NULL);

	ptr = malloc(height * sizeof(int *));

	if (ptr == NULL)
		return (NULL);
	for (a = 0; a < height; a++)
	{
		ptr[a] = malloc(width * sizeof(int));
		if (ptr[a] == NULL)
		{
			for (; a >= 0; a--)
				free(ptr[a]);

			free(ptr);
			return (NULL);
		}
	}
	for (a = 0; a < height; a++)
	{
		for (b = 0; b < width; b++)
			ptr[a][b] = 0;
	}
	return (ptr);
}
