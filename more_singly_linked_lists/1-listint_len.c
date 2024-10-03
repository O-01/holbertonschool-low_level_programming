#include "lists.h"

/**
 * listint_len - prints number of elements in nodes
 * @h: head node
 * Return: number of elements, 0 if h is NULL
 */
size_t listint_len(const listint_t *h)
{
	int iter = 0;

	if (!h)
		return (0);
	for (; h; ++iter, h = h->next)
		;
	return (iter);
}
