#include "lists.h"

/**
 * get_nodeint_at_index - shows node at index location in linked list
 * @head: head of object linked list
 * @index: place of linked list of which we are finding the node
 * Return: pointer to node at index given
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *pos;
	unsigned int ind_X = 0;

	if (head == NULL)
		return (NULL);

	for (pos = head; ind_X < index && pos->next; ind_X++)
		pos = pos->next;

	return (pos);
}
