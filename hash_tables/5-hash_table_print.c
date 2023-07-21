#include "hash_tables.h"

/**
 * hash_table_print - prints contents of hash table
 * @ht: object hash table
 * Return: void
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *ids = NULL;
	char *delim = ", ";
	unsigned long int x = 0, flag = 0;

	if (ht == NULL)
		return;

	printf("{");

	for (; x != ht->size; x++)
		for (ids = ht->array[x]; ids; ids = ids->next)
		{
			if (flag == 1)
				printf("%s", delim);
			printf("'%s': '%s'", ids->key, ids->value);
			flag = 1;
		}

	printf("}\n");
}
