#include "main.h"
#include <stdio.h>

/**
 * print_chessboard - Prints a chessboard
 * @a: Pointer to the array representing the chessboard
 *
 * Return: void
 */
void print_chessboard(char (*a)[8])
{
	int i;
	int n;

	for (int i = 0; i < 8; i++)
	{
		for (int n = 0; n < 8; n++)
		{
			_putchar(a[i][n]);
		}
		_putchar('\n');
	}					    }
}
