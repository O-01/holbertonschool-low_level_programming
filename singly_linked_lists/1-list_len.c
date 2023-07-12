#include "lists.h"

/**
 * list_len - prints number of elements in nodes
 * @h: head node
 * Return: number of elements, 0 if h is NULL
 */

size_t list_len(const list_t *h)
{
	int x = 0;

	if (h == NULL)
		return (0);

	for (; h; x++)
		h = h->next;

	return (x);
}
