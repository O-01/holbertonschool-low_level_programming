#include "lists.h"

/**
 * add_dnodeint - create node & add it as the head of our linked list
 * @head: pointer to head of linked list
 * @n: int value to be stored in the node
 * Return: address of new node, NULL if mem alloc fails
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *add;

	add = malloc(sizeof(dlistint_t));

	if (add == NULL)
		return (NULL);

	add->n = n;
	add->prev = NULL;
	add->next = *head;

	if (*head != NULL)
		(*head)->prev = add;

	*head = add;

	return (add);
}
