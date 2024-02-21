#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a list.
 * @head: pointer to head of the list
 * @index: index of the node to search for, starting from 0
 * Return: nth node or null
 **/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int num;
	dlistint_t *temp;

	num = 0;
	if (head == NULL)
	return (NULL);

	temp = head;
	while (temp)
	{
	if (index == num)
	return (temp);
	num++;
	temp = temp->next;
	}
	return (NULL);
}
