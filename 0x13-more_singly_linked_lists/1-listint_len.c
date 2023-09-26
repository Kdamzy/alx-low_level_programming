#include "lists.h"

/**
 * listint_len - returns the number of node in a list
 * @h: pointer to the beginning of the list
 * Return: the number of nodes in the list
 */
size_t listint_len(const listint_t *h)
{
	size_t num_node = 0;

	while (h != NULL)
	{
		h = h->next;
		num_node++;
	}
	return (num_node);
}
