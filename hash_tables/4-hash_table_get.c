#include "hash_tables.h"

/**
 * hash_table_get - grabs value at key
 * @ht: object hash table
 * @key: key to be searched
 * Return: value at key
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *tmp = NULL;
	unsigned long int idx = 0;

	if (!ht || !key)
		return (NULL);
	idx = (hash_djb2((const unsigned char *)key)) % ht->size;
	if (!ht->array[idx])
		return (NULL);
	for (tmp = ht->array[idx]; tmp; tmp = tmp->next)
		if (!strcmp(key, tmp->key))
			return (tmp->value);
	return (NULL);
}
