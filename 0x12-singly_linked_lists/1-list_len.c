#include "lists.h"

/**
 * list_len - print the number of elements in a list.
 * @h: Pointer to the head
 *
 * Return: The number of nodes in the list.
 */
size_t list_len(const list_t *h)
{
	size_t node_count = 0;

	while (h != NULL)
	{
		h = h->next;
		node_count++;
	}

	return (node_count);
}
