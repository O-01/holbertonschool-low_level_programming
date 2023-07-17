#include "lists.h"

/**
 *
 *
 *
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
