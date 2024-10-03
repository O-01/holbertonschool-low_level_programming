#include "lists.h"

/**
 * add_nodeint_end - create node & add it at the end of our linked list
 * @head: pointer to head of linked list
 * @n: name of the new node
 * Return: address of new node, NULL if mem alloc fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *end = NULL, *pos = NULL;

	end = malloc(sizeof(list_t));
	if (!end)
		return (NULL);
	end->n = n;
	end->next = NULL;
	if (!*head)
		return (*head = end);
	for (pos = *head; pos->next; pos = pos->next)
		;
	pos->next = end;
	return (end);
}
