#include "lists.h"

/**
 * free_list - free linked list
 * @head: head of linked list
 * Return: void
 */

void free_list(list_t *head)
{
	list_t *pos;

	for (; head;)
	{
		pos = head->next;
		free(head->str);
		free(head);
		head = pos;
	}
}
