#include "main.h"

/**
 * set_string - Sets the value of a pointer to a char
 * @s: Double pointer to a char
 * @to: Pointer to the char to set the value to
 *
 * Return: void
 */
void set_string(char **s, char *to)
{
	*s = to;
}
