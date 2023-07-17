#include "lists.h"

/**
 * sum_listint - calculate sum of listint_t nodes
 * @head: head of input list
 * Return: sum of nodes
 */

int sum_listint(listint_t *head)
{
	listint_t *temp;
	unsigned int plus = 0;

	if (head == NULL)
		return (0);

	temp = head;

	for(; temp->next;)
	{
		plus += temp->n;
		temp = temp->next;
	}

	plus += temp->n;

	return (plus);
}
