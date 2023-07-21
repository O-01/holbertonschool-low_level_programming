#include "hash_tables.h"

/**
 * hash_table_get - grabs value at key
 * @ht: object hash table
 * @key: key to be searched
 * Return: value at key
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int idx = 0;

	if (ht == NULL || key == NULL)
		return (NULL);

	idx = (hash_djb2((const unsigned char *)key)) % ht->size;

	if (ht->array[idx] == NULL)
		return (NULL);

	if (strcmp(key, ht->array[idx]->key) == 0)
		return (ht->array[idx]->value);

	return (NULL);
}
