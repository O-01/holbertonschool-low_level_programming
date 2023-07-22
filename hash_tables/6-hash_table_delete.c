#include "hash_tables.h"

/**
 * hash_table_delete - deletes specified hash table
 * @ht: object hash table
 * Return: void
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *tmp = NULL, *fre = NULL;
	unsigned long int x = 0;

	if (ht == NULL)
		return;

	for (; x < ht->size; x++)
		for (tmp = ht->array[x]; tmp != NULL; tmp = tmp->next)
		{
			fre = tmp;
			free(fre->key);
			free(fre->value);
			free(fre);
		}

	free(ht->array);
	free(ht);
}
