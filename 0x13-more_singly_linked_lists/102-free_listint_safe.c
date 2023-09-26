#include "lists.h"

/**
 * free_listint_safe - free a linked list
 * @h: pointer to the head node in the linked list
 *
 * Return: number of node in the freed list
 */
size_t free_listint_safe(listint_t **h)
{
	size_t num = 0;
	int a;
	listint_t *temp;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		a = *h - (*h)->next;
		if (a > 0)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
			num++;
		}
		else
		{
			free(*h);
			*h = NULL;
			num++;
			break;
		}
	}

	*h = NULL;

	return (num);
}
