#include "lists.h"

/**
 * pop_listint - removes node from head of listint_t linked list
 * @head: to be removed from list
 * Return: value of new head
 */

int pop_listint(listint_t **head)
{
	listint_t *del, *head1;

	if (head == NULL)
		return (0);

	del = *head;
	if (del->next != NULL)
	{head1 = del->next;
		*head = head1;
		free(del);
	}

	return (del->n);
}
