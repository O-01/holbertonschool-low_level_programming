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
	unsigned int id_x;

	add = malloc(sizeof(listint_t));

	if ((!(*head) && idx) || add == NULL)
		return (NULL);

	tmp = *head;

	for (; tmp->next; id_x++)
	{
		if (id_x < idx && tmp->next == NULL)
			return (NULL);
		if (id_x == idx)
		{
			add->n = n;
			add->next = tmp->next;
			tmp->next = add;
			continue;
		}
		tmp = tmp->next;
	}
	return (add);
}
