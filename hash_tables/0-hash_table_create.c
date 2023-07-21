#include "hash_tables.h"

/**
 * hash_table_create - creates hash table of given size
 * @size: desired hash table size
 * Return: new table upon success, NULL upon malloc failure or no size given
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *teibl = NULL;

	teibl = malloc(sizeof(hash_table_t));

	if (teibl == NULL || size == 0)
		return (NULL);

	teibl->size = size;
	teibl->array = malloc(sizeof(hash_node_t *) * size);

	if (teibl->array == NULL)
		return (NULL);

	return (teibl);
}
