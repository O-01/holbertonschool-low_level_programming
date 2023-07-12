#include "lists.h"

/**
 * add_node_end - create node & add it at the end of our linked list
 * @head: pointer to head of linked list
 * @s1: name of the new node
 * Return: address of new node, NULL if mem alloc fails
 */

list_t *add_node_end(list_t **head, const char *s1)
{
	int dl = 0;
	list_t *end;
	list_t *pos;

	end = malloc(sizeof(list_t));

	if (end == NULL)
		return (NULL);

	for (; s1[dl]; dl++)
		;

	end->str = strdup(s1);
	end->len = dl;
	end->next = NULL;

	if (*head == NULL)
		*head = end;
	else
	{
		pos = *head;

		for (; pos->next;)
			pos = pos->next;

		pos->next = end;
	}

	return (end);
}
