#include <stdio.h>
#include "dog.h"

/**
 * print_dog - Prints information about a dog
 * @d:  pointer to the struct dog
 *
 * Description: This function prints the information
 * about a dog, it's name, age, and owner.
 * If any element of d is NULL, it prints (nil) for that element.
 * If d is NULL, it does nothing.
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: %s\n", d->name ? d->name : "(nil)");
		printf("Age: %.6f\n", d->age);
		printf("Owner: %s\n", d->owner ? d->owner : "(nil)");
	}
}
