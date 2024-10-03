#include "lists.h"

/**
 * free_listint - free linked list
 * @head: head of linked list
 */
void free_listint(listint_t *head)
{
	listint_t *pos = NULL;

	for (; head; head = pos)
	{
		pos = head->next,
		free(head), head = NULL;
	}
}
