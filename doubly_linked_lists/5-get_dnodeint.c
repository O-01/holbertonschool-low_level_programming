#include "lists.h"

/**
 * get_dnodeint_at_index - shows node at index location in linked list
 * @head: head of object linked list
 * @index: place of linked list of which we are finding the node
 * Return: pointer to node at index given
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *pos;
	unsigned int ind_X = 0;

	pos = head;

	for (; pos; ind_X++)
	{
		if (ind_X == index)
			return (pos);
		pos = pos->next;
	}

	return (NULL);
}
