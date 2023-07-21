#include "hash_tables.h"

/**
 *
 *
 *
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *ids = NULL;
/*	unsigned char *key = 0;*/
	char *delim = ", ";
	unsigned long int x = 0;
/*	unsigned long int idx = 0;*/

/*	idx = hash_djb2(key) % ht->size;*/

	if (ht == NULL)
		return;

	printf("{");

	for (; x < ht->size; x++)
		if (ht->array[x] != NULL)
		{
			ids = ht->array[x];
			if (ids->next == NULL)
				delim = "";
			printf("'%s': '%s'%s", ids->key, ids->value, delim);
		}

	printf("}\n");
}
