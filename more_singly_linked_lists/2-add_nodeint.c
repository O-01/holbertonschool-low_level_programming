#include "lists.h"

/**
 * add_nodeint - create node & add it as the head of our linked list
 * @head: pointer to head of linked list
 * @n: int value to be stored in the node
 * Return: address of new node, NULL if mem alloc fails
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *add;

	add = malloc(sizeof(listint_t));

	if (add == NULL)
		return (NULL);

	add->n = n;
	add->next = *head;
	*head = add;

	return (add);
}
