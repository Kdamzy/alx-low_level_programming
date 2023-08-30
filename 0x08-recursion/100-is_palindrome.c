#include "main.h"

/**
 * is_palindrome - Checks if a string is a palindrome
 * @s: Pointer to the string to be checked
 *
 * Return: 1 if s is a palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
	int a = _strlen(s);

	return (palindrome_helper(s, 0, a - 1));
}

/**
 * _strlen - Returns the length of a string
 * @s: Pointer to the string
 *
 * Return: a(length) of the string
 */
int _strlen(char *s)
{
	int a = 0;

	while (*s != '\0')
	{
		a++;
		s++;

		return (a);
}

/**
 * palindrome_helper - Recursive helper function to check palindromicity
 * @s: Pointer to the string to be checked
 * @c: The starting index of the substring to check
 * @d: The ending index of the substring to check
 *
 * Return: 1 if s is a palindrome, 0 otherwise
 */
int palindrome_helper(char *s, int c, int d)
{
	if (c >= d)
		return (1);

	if (s[c] != s[d])
		return (0);

	return (palindrome_helper(s, c + 1, d - 1));
}
