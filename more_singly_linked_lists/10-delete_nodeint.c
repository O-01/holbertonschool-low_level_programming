#include "lists.h"

/**
 * delete_nodeint_at_index - deletes node at specified index
 * @head: head of listint_t linked list
 * @index: node index of linked list to be deleted
 * Return: 1 upon success, -1 otherwise
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp = NULL, *delete = *head;
	unsigned int iter = 0;

	if (*head == NULL)
		return (-1);
	if (!index)
		return (*head = (*head)->next, free(delete), delete = NULL, 1);
	for (tmp = *head; tmp; ++iter, tmp = tmp->next)
	{
		if (iter < index && !tmp->next)
			return (-1);
		if (iter == index - 1)
			break;
	}
	delete = tmp->next;
	if (tmp->next->next)
		tmp->next = delete->next;
	free(delete), delete = NULL;
	return (1);
}
