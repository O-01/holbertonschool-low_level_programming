#include "lists.h"

/**
 * pop_listint - removes node from head of listint_t linked list
 * @head: to be removed from list
 * Return: value of new head
 */

int pop_listint(listint_t **head)
{
	listint_t *del;
	int memento = 0;

	if (*head == NULL)
		return (0);

	del = *head;
	memento = del->n;
	*head = (*head)->next;

	free(del);

	return (memento);
}
