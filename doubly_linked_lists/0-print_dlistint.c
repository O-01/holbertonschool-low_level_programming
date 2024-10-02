#include "lists.h"

/**
 * print_dlistint - prints all elements in a listint_t
 * @h: head node
 * Return: number of elements, 0 if h is NULL
 */
size_t print_dlistint(const dlistint_t *h)
{
	int iter = 0;

	if (!h)
		return (0);
	for (; h; ++iter, h = h->next)
		printf("%d\n", h->n);
	return (iter);
}
