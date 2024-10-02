#include "lists.h"

/**
 * dlistint_len - prints number of elements in nodes
 * @h: head node
 * Return: number of elements, 0 if h is NULL
 */
size_t dlistint_len(const dlistint_t *h)
{
	int iter = 0;

	if (!h)
		return (0);
	for (; h; ++iter, h = h->next)
		;
	return (iter);
}
