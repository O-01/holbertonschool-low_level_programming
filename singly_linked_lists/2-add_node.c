#include "lists.h"

/**
 * add_node - create node & add it as the head of our linked list
 * @head: pointer to head of linked list
 * @s1: name of the new node
 * Return: address of new node, NULL if mem alloc fails
 */

list_t *add_node(list_t **head, const char *s1)
{
	int dl = 0;
	list_t *add;

	add = malloc(sizeof(list_t));

	if (add == NULL)
		return (NULL);

	for (; s1[dl]; dl++)
		;

	add->str = strdup(s1);
	add->len = dl;
	add->next = *head;
	*head = add;

	return (add);
}
