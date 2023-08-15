#include "main.h"
/**
 * main - prints "_putchar" followed by a newline.
 * _putchar - Writes a character to stdout
 * @c: The character to be written
 *
 * Return: Always 0 (Success)
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
