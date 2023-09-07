#include "main.h"

/**
 *_print_rev_recursion - Prints a string in reverse using recursion
 * @s: Pointer to the string to be printed in reverse
 *
 * Return: void
 */
void _print_rev_recursion(char *s)
{
	/* Base case: If the current character is the null terminator, return */
	if (*s == '\0')
		return;

	/* Recursive call to print the rest of the string in reverse */
	_print_rev_recursion(s + 1);

	/* Print the current character */
	_putchar(*s);
}
