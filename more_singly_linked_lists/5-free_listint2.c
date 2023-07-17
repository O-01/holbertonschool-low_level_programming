#include "lists.h"

/**
 * free_listint2 - free linked list, setting head to NULL
 * @head: head of linked list
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *head1, *pos;

	if (head == NULL)
		return;

	head1 = *head;
	for (; head1;)
	{
		pos = head1->next;
		free(head1);
		head1 = pos;
	}
	*head = head1;
	*head = NULL;
}
