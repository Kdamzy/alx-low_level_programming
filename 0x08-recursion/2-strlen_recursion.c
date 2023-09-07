#include "main.h"

/**
 * _strlen_recursion - Returns the length of a string using recursion
 * @s: Pointer to the string
 *
 * Return: Length of the string
 */
int _strlen_recursion(char *s)
{
	/* If the current character is the null terminator, return 0 */
	if (*s == '\0')
		return (0);

	/* Recursive call to find the length of the rest of the string */
	return (1 + _strlen_recursion(s + 1));
}
