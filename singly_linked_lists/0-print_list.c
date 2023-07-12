#include "lists.h"

/**
 * print_list - prints length of strings in nodes
 * @h: head node
 * Return: number of elements, -1 if h is NULL
 */

size_t print_list(const list_t *h)
{
	int x = 0;
	char *s1 = NULL;

	if (h == NULL)
		return (0);
	for (; h; x++)
	{
		s1 = h->str;
		if (s1)
			printf("[%d] %s\n", h->len, h->str);
		else
			printf("[0] (nil)\n");
		h = h->next;
	}
	return (x);
}
