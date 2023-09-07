#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * _strdup - Duplicates a string.
 * @str: string to be duplicated.
 *
 * Return: pointer to the newly allocated duplicated string,
 * or NULL if insufficient memory space was available..
 */
char *_strdup(char *str)
{
	int a, b = 0;
	char *ptr;

	if (str == NULL)
		return (NULL);
	a = 0;
	while (str[a] != '\0')
		a++;

	ptr = malloc(sizeof(char) * (a + 1));

	if (ptr == NULL)
		return (NULL);

	for (b = 0; str[b]; b++)
		ptr[b] = str[b];

	return (ptr);
}
