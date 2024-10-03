#include "lists.h"

/**
 * get_nodeint_at_index - shows node at index location in linked list
 * @head: head of object linked list
 * @index: place of linked list of which we are finding the node
 * Return: pointer to node at index given
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *pos = NULL;
	unsigned int iter = 0;

	for (pos = head; pos; ++iter, pos = pos->next)
		if (iter == index)
			return (pos);
	return (NULL);
}
