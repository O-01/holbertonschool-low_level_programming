#include "lists.h"

/**
 * add_node_end - create node & add it at the end of our linked list
 * @head: pointer to head of linked list
 * @s1: name of the new node
 * Return: address of new node, NULL if mem alloc fails
 */
list_t *add_node_end(list_t **head, const char *s1)
{
	int len = 0;
	list_t *end = NULL, *pos = NULL;

	end = malloc(sizeof(list_t));
	if (!end)
		return (NULL);
	for (; s1[len]; ++len)
		;
	end->str = strdup(s1);
	end->len = len;
	end->next = NULL;
	if (!*head)
		return (*head = end);
	for (pos = *head; pos->next; pos = pos->next)
		;
	return (pos->next = end);
}
