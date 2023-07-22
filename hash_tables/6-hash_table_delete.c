#include "hash_tables.h"

/**
 * hash_table_delete - deletes specified hash table
 * @ht: object hash table
 * Return: void
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *node = NULL, *delete = NULL;
	unsigned long int x = 0;

	if (!ht || !ht->size || !ht->array)
		return;

	for (; x != ht->size; x++)
		for (node = ht->array[x]; node; node = node->next)
		{
			delete = node;
			free(delete->key);
			free(delete->value);
			free(delete);
		}

	free(ht->array);
	ht->array = NULL;
	ht->size = 0;

	free(ht);
}
