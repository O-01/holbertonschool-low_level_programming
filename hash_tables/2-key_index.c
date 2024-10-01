#include "hash_tables.h"

/**
 * key_index - finds the index of given key
 * @key: key of which we wish to find the index
 * @size: size of the hash table array
 * Return: index of given key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int idx, hash;

	if (!key || !size)
		return (-1);
	hash = hash_djb2(key);
	idx = hash % size;
	return (idx);
}
