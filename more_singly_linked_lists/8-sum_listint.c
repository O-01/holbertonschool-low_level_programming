#include "lists.h"

/**
 * sum_listint - calculate sum of listint_t nodes
 * @head: head of input list
 * Return: sum of nodes
 */
int sum_listint(listint_t *head)
{
	listint_t *tmp;
	unsigned int sum = 0;

	if (!head)
		return (0);
	for (tmp = head; tmp; tmp = tmp->next)
		sum += tmp->n;
	return (sum);
}
