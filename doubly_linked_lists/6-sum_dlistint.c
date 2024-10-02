#include "lists.h"

/**
 * sum_dlistint - calculate sum of dlistint_t nodes
 * @head: head of input list
 * Return: sum of nodes
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;
	unsigned int plus = 0;

	if (!head)
		return (0);
	for (tmp = head; tmp->next; tmp = tmp->next)
		plus += tmp->n;
	plus += tmp->n;
	return (plus);
}
