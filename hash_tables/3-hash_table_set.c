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
	hash_node_t *add = NULL, *tmp = NULL;
	unsigned long int idx = 0;

	if (!ht || !key)
		return (0);
	if (!value)
		value = "";
	idx = (hash_djb2((const unsigned char *)key)) % ht->size;
	for (tmp = ht->array[idx]; tmp; tmp = tmp->next)
		if (!strcmp(key, tmp->key))
		{
			free(tmp->value);
			tmp->value = strdup(value);
			return (1);
		}
	add = calloc(1, sizeof(hash_node_t));
	if (!add)
		return (0);
	add->key = strdup(key);
	add->value = strdup(value);
	add->next = ht->array[idx];
	ht->array[idx] = add;
	return (1);
}
