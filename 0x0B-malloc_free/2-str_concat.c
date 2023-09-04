#include <stdlib.h>
#include "main.h"

/**
 * str_concat - Concatenates two strings.
 * @s1: The first string.
 * @s2: The second string.
 *
 * Return: pointer to the newlyspace in the memory which contains
 * the content of the concatenated string, or NULL on failure.
 */
char *str_concat(char *s1, char *s2)
{
	char *cocat;
	int a, b;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	a = b = 0;
	while (s1[a] != '\0')
		a++;
	while (s2[b] != '\0')
		b++;
	cocat = malloc(sizeof(char) * (a + b + 1));

	if (cocat == NULL)
		return (NULL);
	a = b = 0;
	while (s1[a] != '\0')
	{
		cocat[a] = s1[a];
		a++;
	}

	while (s2[b] != '\0')
	{
		cocat[a] = s2[b];
		a++, b++;
	}
	cocat[a] = '\0';
	return (cocat);
}
