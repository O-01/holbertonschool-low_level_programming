#include "hash_tables.h"

/**
 * hash_table_set - adds an element to hash table
 * @ht: object hash table
 * @key: key of node to be added
 * @value: value of node to be added
 * Return: 1 upon success, 0 upon failure
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *add = NULL, *list_head;
	unsigned long int idx = 0, x = 0;

	add = malloc(sizeof(hash_node_t));

	if (add == NULL || key == NULL || ht == NULL)
		return (0);

	for(; key[x]; x++)
		;
	if (x < 1)
		return (0);

	add->key = strdup(key);
	add->value = strdup(value);
	add->next = NULL;

	idx = (hash_djb2((const unsigned char *)key)) % ht->size;

	if (ht->array[idx] == NULL)
		ht->array[idx] = add;
	else
	{
		list_head = ht->array[idx];
		add->next = list_head;
		ht->array[idx] = add;
	}

	return (1);
}
