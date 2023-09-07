#include "main.h"
/**
 * is_palindrome - Checks if a string is a palindrome
 * @s: Pointer to the string to be checked
 *
 * Return: 1 if s is a palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
	int length = _strlen(s);

	return (palindrome_helper(s, length));
}

/**
 * _strlen - Returns the length of a string
 * @s: Pointer to the string
 *
 * Return: Length of the string
 */
int _strlen(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen(s + 1));
}

/**
 * palindrome_helper - Recursive helper function to check palindromicity
 * @s: Pointer to the string to be checked
 * @length: The current length of the string
 *
 * Return: 1 if s is a palindrome, 0 otherwise
 */
int palindrome_helper(char *s, int length)
{
	if (length <= 1)
		return (1);

	if (*s != s[length - 1])
		return (0);

	return (palindrome_helper(s + 1, length - 2));
}
