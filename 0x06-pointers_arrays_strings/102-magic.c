#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a[5];
	int *p;

	p = a;
	*(p + 2) = 98; /* Add this line to assign 98 to a[2] */
	printf("a[2] = %d\n", a[2]);
	return (0);
}
