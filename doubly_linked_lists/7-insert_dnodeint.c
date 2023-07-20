#include "lists.h"

/**
 * insert_dnodeint_at_index - insert new node at specified index
 * @head: head of dlistint_t linked list
 * @idx: position/index in list where new node is to be inserted
 * @n: specified contents of new node
 * Return: address of new node, NULL upon fail invalid index
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **head, unsigned int idx, int n)
{
	dlistint_t *tmp, *add;
	unsigned int id_x = 0;

	add = malloc(sizeof(dlistint_t));

	if (add == NULL)
		return (NULL);

	tmp = *head;

	add->n = n;

	if (idx == 0)
	{
		add->next = *head;
		add->prev = NULL;
		if (*head != NULL)
			(*head)->prev = add;
		*head = add;
		return (add);
	}

	for (; id_x != idx - 1; id_x++)
	{
		if (id_x < idx && tmp->next == NULL)
			return (NULL);
		tmp = tmp->next;
	}

	if (tmp->next != NULL)
		add->next = tmp->next, add->prev = tmp, tmp->next = add;
	else
		tmp->next = add, add->prev = tmp, add->next = NULL;

	return (add);
}
