#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints all the elements in a list
 * @h: pointer to the start of the list
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t num_node = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		num_node++;
	}
	return (num_node);
}
