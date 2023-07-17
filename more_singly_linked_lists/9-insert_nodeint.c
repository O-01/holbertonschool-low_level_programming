#include "lists.h"

/**
 *
 *
 *
 *
 *
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *tmp, *add;
	unsigned int id_x = 0;

	add = malloc(sizeof(listint_t));

	if (add == NULL)
		return (NULL);

	tmp = *head;

	add->n = n;

	if (idx)
		for (; id_x != idx - 1; id_x++)
		{
			if (id_x < idx && tmp->next == NULL)
				return (NULL);
			tmp = tmp->next;
		}
	else
		add->next = *head, *head = add;

	if (tmp->next != NULL)
		add->next = tmp->next, tmp->next = add;
	else
		tmp->next = add, add->next = NULL;

	return (add);
}
