#include "lists.h"

/**
 * pop_listint - removes node from head of listint_t linked list
 * @head: to be removed from list
 * Return: value of new head
 */
int pop_listint(listint_t **head)
{
	listint_t *delete = NULL;
	int memento = 0;

	if (!*head)
		return (0);
	delete = *head;
	memento = (*head)->n;
	*head = (*head)->next;
	free(delete), delete = NULL;
	return (memento);
}
