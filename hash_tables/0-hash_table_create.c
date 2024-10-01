#include "hash_tables.h"

/**
 * hash_table_create - creates hash table of given size
 * @size: desired hash table size
 * Return: new table upon success, NULL upon malloc failure or no size given
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table = NULL;

	if (!size)
		return (NULL);
	table = calloc(1, sizeof(hash_table_t));
	if (!table)
		return (NULL);
	table->size = size;
	table->array = calloc(1, sizeof(hash_node_t *) * size);
	if (table->array == NULL)
		return (NULL);
	return (table);
}
