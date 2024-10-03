#include "lists.h"

/**
 * insert_nodeint_at_index - insert new node at specified index
 * @head: head of listint_t linked list
 * @idx: position/index in list where new node is to be inserted
 * @n: specified contents of new node
 * Return: address of new node, NULL upon fail invalid index
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *tmp = NULL, *add = NULL;
	unsigned int iter = 0;

	add = malloc(sizeof(listint_t));
	if (!add)
		return (NULL);
	add->n = n;
	if (!idx)
		return (add->next = *head, *head = add);
	for (tmp = *head; iter != idx - 1; ++iter, tmp = tmp->next)
		if (iter < idx && !tmp->next)
			return (NULL);
	if (tmp->next)
		add->next = tmp->next, tmp->next = add;
	else
		tmp->next = add, add->next = NULL;
	return (add);
}
