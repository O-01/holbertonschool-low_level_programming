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
	unsigned int idx = 0;

	if (*head == NULL)
		return (-1);

	tmp = *head, del = *head;

	if (index == 0)
	{
		if ((*head)->next != NULL)
		{
			(*head)->next->prev = NULL;
			*head = (*head)->next;
			free(del);
		}
	}

	else
		for (; tmp; idx++)
		{
			if (idx < index && tmp->next == NULL)
				return (-1);
			if (idx == index - 1)
			{
				del = tmp->next;
				if (tmp->next != NULL)
					tmp->next = del->next;
				free(del);
				continue;
			}
			tmp = tmp->next;
		}

	return (1);
}
