#include "lists.h"

/**
 * free_listint2 - free linked list, setting head to NULL
 * @head: head of linked list
 */
void free_listint2(listint_t **head)
{
	listint_t *pos = NULL;

	if (!head)
		return;
	for (; *head; *head = pos)
	{
		pos = (*head)->next;
		free(*head), *head = NULL;
	}
}
