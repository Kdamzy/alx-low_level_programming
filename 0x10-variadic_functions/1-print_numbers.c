#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - Prints numbers followed by a new line.
 * @separator: string to be printed between numbers
 * or NULL if no separator
 * @n: number of integers passed to the function
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int a;

	va_start(ap, n);

	for (a = 0; a < n; a++)
	{
		printf("%d", va_arg(ap, int));

		if (separator != NULL && a != n - 1)
			printf("%s", separator);
	}

	va_end(ap);
	printf("\n");
}
