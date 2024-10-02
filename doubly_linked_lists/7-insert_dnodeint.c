#include "lists.h"

/**
 * insert_dnodeint_at_index - insert new node at specified index
 * @h: head of dlistint_t linked list
 * @idx: position/index in list where new node is to be inserted
 * @n: specified contents of new node
 * Return: address of new node, NULL upon fail invalid index
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *tmp, *add;
	unsigned int iter = 0;

	add = malloc(sizeof(dlistint_t));
	if (!add)
		return (NULL);
	add->n = n;
	if (!idx)
	{
		add->next = *h;
		add->prev = NULL;
		if (*h != NULL)
			(*h)->prev = add;
		*h = add;
		return (add);
	}
	for (tmp = *h; iter < idx - 1; ++iter, tmp = tmp->next)
		if (iter < idx && tmp->next == NULL)
			return (NULL);
	if (tmp->next)
		add->next = tmp->next,
		tmp->next->prev = add;
	else
		add->next = NULL;
	add->prev = tmp;
	tmp->next = add;
	return (add);
}
