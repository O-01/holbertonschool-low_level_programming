#include "lists.h"

/**
 * print_list - prints length of strings in nodes
 * @h: head node
 * Return: number of elements, 0 if h is NULL
 */
size_t print_list(const list_t *h)
{
	int iter = 0;

	if (!h)
		return (0);
	for (; h; ++iter, h = h->next)
		printf("[%d] %s\n", h->str ? h->len : 0, h->str ? h->str : "(nil)");
	return (iter);
}
