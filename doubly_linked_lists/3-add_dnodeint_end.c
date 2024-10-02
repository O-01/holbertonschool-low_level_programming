#include "lists.h"

/**
 * add_dnodeint_end - create node & add it at the end of our linked list
 * @head: pointer to head of linked list
 * @n: name of the new node
 * Return: address of new node, NULL if mem alloc fails
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *end, *pos;

	end = malloc(sizeof(dlistint_t));
	if (!end)
		return (NULL);
	end->n = n;
	end->next = NULL;
	if (!*head)
		*head = end;
	else
	{
		pos = *head;
		for (; pos->next;)
			pos = pos->next;
		end->prev = pos;
		pos->next = end;
	}
	return (end);
}
