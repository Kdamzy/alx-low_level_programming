#include <stdlib.h>
#include "main.h"
#include <stdio.h>

/**
 * _strdup - Duplicates a string.
 * @str: string to be duplicated.
 *
 * Return: pointer to the newly allocated duplicated string,
 * or NULL if insufficient memory space was available..
 */
char *_strdup(char *str)
{
	unsigned int a = 0;
	unsigned int b;
	char *ptr;

	if (str == NULL)
		return (NULL);
	a = 0;
	while (str[a] != '\0')
		a++;
	ptr = malloc(sizeof(char) * (a + 1));

	if (ptr == NULL)
		return (NULL);

	for (b = 0; b < a; b++)
		ptr[b} = str[b];

	ptr[b] = '\0';

	return (ptr);
}
