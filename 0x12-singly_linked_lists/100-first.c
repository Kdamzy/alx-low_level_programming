#include <stdio.h>

void my_first(void) __attribute__((constructor));

/**
 * my_first - Function that runs before main.
 *
 */
void my_first(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
