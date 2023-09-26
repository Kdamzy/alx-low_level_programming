#include "lists.h"

/**
 * print_listint_safe - prints a listint_t linked list
 * @head: pointer to the head of the list
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *slow, *fast;
	size_t node_count = 0;

	if (head == NULL)
	{
		fprintf(stderr, "Error: Empty list\n");
		exit(98);
	}

	slow = head;
	fast = head;

	while (fast != NULL && fast->next != NULL)
	{
		printf("[%p] %d\n", (void *)slow, slow->n);
		node_count++;

		slow = slow->next;
		fast = fast->next->next;

		if (slow == fast)
		{
			printf("-> [%p] %d\n", (void *)slow, slow->n);
			node_count++;
			break;
		}
	}

	if (slow != fast)
	{
		while (head != NULL)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			node_count++;
			head = head->next;
		}
	}

	return (node_count);
}
