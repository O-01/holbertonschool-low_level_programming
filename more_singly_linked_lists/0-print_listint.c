#include "lists.h"

/**
 * print_listint - prints all elements in a listint_t
 * @h: head node
 * Return: number of elements, 0 if h is NULL
 */

size_t print_listint(const listint_t *h)
{
	int x = 0, no = 0;

	if (h == NULL)
		return (0);
	for (; h; x++)
	{
		no = h->n;
		if (no)
			printf("%d\n", h->n);
		h = h->next;
	}
	return (x);
}
