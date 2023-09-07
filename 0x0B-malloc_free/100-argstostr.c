#include <stdlib.h>
#include "main.h"

/**
 * argstostr - Concatenates all the arguments
 * of the program into a single string.
 * @ac: The number of arguments.
 * @av: The array of argument strings.
 *
 * Return: pointer to the concatenated string, or NULL on failure.
 */
char *argstostr(int ac, char **av)
{
	char *ptr;
	int a, b, c = 0, d = 0;

	if (av == NULL || ac == 0)
		return (NULL);

	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b]; b++)
			c++;
	}
	c += ac;

	ptr = malloc(sizeof(char) * c + 1);
	if (ptr == NULL)
		return (NULL);
	for (a = 0; a < ac; a++)
	{
	for (b = 0; av[a][b]; b++)
	{
		ptr[d] = av[a][b];
		d++;
	}
	if (ptr[d] == '\0')
	{
		ptr[d++] = '\n';
	}
	}
	return (ptr);
}
