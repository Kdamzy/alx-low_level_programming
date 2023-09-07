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
	int c;

	for (i = 0; i < 8; i++)
	{
		for (c = 0; c < 8; c++)
		{
			_putchar(a[i][c]);
		}
		_putchar('\n');
	}
}
