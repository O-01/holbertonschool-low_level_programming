#include "hash_tables.h"

/**
 * hash_table_print - prints contents of hash table
 * @ht: object hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *id = NULL;
	unsigned long int iter = 0, flag = 0;

	if (!ht)
		return;
	printf("{");
	for (; iter < ht->size; ++iter)
		for (id = ht->array[iter]; id; id = id->next, flag = 1)
			printf("%s'%s': '%s'", flag ? ", " : "", id->key, id->value);
	printf("}\n");
}
