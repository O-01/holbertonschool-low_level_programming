#include "hash_tables.h"

/**
 * shash_table_create - creates sorted hash table of given size
 * @size: desired table size
 * Return: new table upon success, NULL upon malloc fail or no size given
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *table = NULL;
	unsigned long int iter = 0;

	if (!size)
		return (NULL);
	table = calloc(1, sizeof(shash_table_t));
	if (!table)
		return (NULL);
	table->size = size;
	table->array = calloc(1, sizeof(shash_node_t *) * size);
	if (!table->array)
		return (NULL);
	for (; iter != size; iter++)
		table->array[iter] = NULL;
	table->shead = NULL;
	table->stail = NULL;
	return (table);
}

/**
 * shash_table_set - adds an element to sorted hash table
 * @ht: object sorted hash table
 * @key: key of node to be added
 * @value: value of node to be added
 * Return: 1 upon success, 0 upon failure
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *add = NULL, *tmp = NULL;
	unsigned long int idx = 0;

	if (!ht || !key)
		return (0);
	if (value == NULL)
		value = "";
	idx = (hash_djb2((const unsigned char *)key)) % ht->size;
	for (tmp = ht->shead; tmp; tmp = tmp->next)
		if (!strcmp(key, tmp->key))
			return (free(tmp->value), tmp->value = strdup(value), 1);
	add = calloc(1, sizeof(shash_node_t));
	if (!add)
		return (0);
	add->key = strdup(key), add->value = strdup(value);
	add->next = ht->array[idx], ht->array[idx] = add;
	if (!ht->shead)
		add->sprev = NULL, add->snext = NULL,
		ht->shead = add, ht->stail = add;
	else if (strcmp(key, ht->shead->key) < 0)
		add->sprev = NULL, add->snext = ht->shead,
		ht->shead->sprev = add, ht->shead = add;
	else
	{
		for (tmp = ht->shead; tmp->snext && strcmp(key, tmp->snext->key) > 0;
			tmp = tmp->snext)
			;
		add->sprev = tmp, add->snext = tmp->snext;
		if (!tmp->snext)
			ht->stail = add;
		else
			tmp->snext->sprev = add;
		tmp->snext = add;
	}
	return (1);
}

/**
 * shash_table_get - grabs value at key
 * @ht: object sorted hash table
 * @key: key to be searched
 * Return: value at key
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	shash_node_t *tmp = NULL;
	unsigned long int idx = 0;

	if (!ht || !key || !(*key))
		return (NULL);
	idx = (hash_djb2((const unsigned char *)key)) % ht->size;
	if (!ht->array[idx])
		return (NULL);
	for (tmp = ht->shead; tmp; tmp = tmp->snext)
		if (!strcmp(key, tmp->key))
			return (tmp->value);
	return (NULL);
}

/**
 * shash_table_print - prints contents of sorted hash table
 * @ht: object sorted hash table
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *id = NULL;
	unsigned long int flag = 0;

	if (!ht)
		return;
	printf("{");
	for (id = ht->shead; id; id = id->snext, flag = 1)
		printf("%s'%s': '%s'", flag ? ", " : "", id->key, id->value);
	printf("}\n");
}

/**
 * shash_table_print_rev - prints contents of sorted hash table in reverse
 * @ht: object sorted hash table
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *id = NULL;
	unsigned long int flag = 0;

	if (!ht)
		return;
	printf("{");
	for (id = ht->stail; id; id = id->sprev, flag = 1)
		printf("%s'%s': '%s'", flag ? ", " : "", id->key, id->value);
	printf("}\n");
}

/**
 * shash_table_delete - deletes specified sorted hash table
 * @ht: object sorted hash table
 */
void shash_table_delete(shash_table_t *ht)
{
	shash_node_t *node = NULL, *delete = NULL;

	if (!ht || !ht->size || !ht->array)
		return;
	for (delete = ht->shead; delete; delete = node)
	{
		node = delete->snext;
		free(delete->key);
		free(delete->value);
		free(delete);
	}
	free(ht->array);
	ht->array = NULL;
	ht->size = 0;
	free(ht);
}
