#include "lists.h"

/**
 * reverse_listint - reverses a listint_t linked list
 * @head: pointer to a pointer to the head of the list
 * Return: a pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *first = NULL;
	listint_t *rest = NULL;

	if (*head == NULL)
		return (NULL);
	first = *head;
	rest = first->next;

	if (rest == NULL)
		return (first);
	*head = rest;
	first->next = NULL;

	return (*head);
}

