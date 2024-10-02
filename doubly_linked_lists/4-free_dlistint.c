#include "lists.h"

/**
 * free_dlistint - free linked list
 * @head: head of linked list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *pos;

	for (; head; head = pos)
		pos = head->next, free(head), head = NULL;
}
