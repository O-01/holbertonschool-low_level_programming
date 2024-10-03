#include "lists.h"

/**
 * free_list - free linked list
 * @head: head of linked list
 */
void free_list(list_t *head)
{
	list_t *pos = NULL;

	for (; head; head = pos)
	{
		pos = head->next;
		free(head->str), head->str = NULL;
		free(head), head = NULL;
	}
}
