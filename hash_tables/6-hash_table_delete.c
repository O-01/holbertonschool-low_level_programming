#include "hash_tables.h"

/**
 * hash_table_delete - deletes specified hash table
 * @ht: object hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *node = NULL, *delete = NULL;
	unsigned long int iter = 0;

	if (!ht || !ht->size || !ht->array)
		return;
	for (; iter != ht->size; iter++)
		for (delete = ht->array[iter]; delete; delete = node)
		{
			node = delete->next;
			free(delete->key);
			free(delete->value);
			free(delete);
		}
	free(ht->array);
	ht->array = NULL;
	ht->size = 0;
	free(ht);
}
