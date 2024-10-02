#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes node at specified index
 * @head: head of dlistint_t linked list
 * @index: node index of linked list to be deleted
 * Return: 1 upon success, -1 otherwise
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp, *del;
	unsigned int iter = 0;

	if (!*head)
		return (-1);
	if (!index)
	{
		if ((*head)->next != NULL)
			(*head)->next->prev = NULL;
		free(*head);
		*head = (*head)->next;
		return (1);
	}
	for (tmp = *head; iter < index - 1; ++iter, tmp = tmp->next)
		if (iter < index && tmp->next == NULL)
			return (-1);
	del = tmp->next;
	if (del->next != NULL)
		tmp->next = del->next,
		del->next->prev = tmp,
		free(del), del = NULL;
	else
		tmp->next = NULL,
		free(del);
	return (1);
}
