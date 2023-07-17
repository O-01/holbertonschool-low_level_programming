#include "lists.h"

/**
 * free_listint - free linked list
 * @head: head of linked list
 * Return: void
 */

void free_listint(listint_t *head)
{
	listint_t *pos;

	for (; head;)
	{
		pos = head->next;
		free(head);
		head = pos;
	}
}
