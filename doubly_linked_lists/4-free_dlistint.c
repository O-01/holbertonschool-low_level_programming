#include "lists.h"

/**
 * free_dlistint - free linked list
 * @head: head of linked list
 * Return: void
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *pos;

	for (; head;)
	{
		pos = head->next;
		free(head);
		head = pos;
	}
}
