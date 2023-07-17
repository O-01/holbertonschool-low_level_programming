#include "lists.h"

/**
 * delete_nodeint_at_index - deletes node at specified index
 * @head: head of listint_t linked list
 * @index: node index of linked list to be deleted
 * Return: 1 upon success, -1 otherwise
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp, *del;
	unsigned int idx = 0;

	if (*head == NULL)
		return (-1);

	tmp = *head, del = *head;

	if (index == 0)
	{
		*head = (*head)->next;
		free(del);
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
