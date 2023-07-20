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

	if (head == NULL)
		return (0);

	tmp = head;

	for (; tmp->next;)
	{
		plus += tmp->n;
		tmp = tmp->next;
	}

	plus += tmp->n;

	return (plus);
}
