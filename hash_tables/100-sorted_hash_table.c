#include "hash_tables.h"

/**
 *
 *
 *
 */

shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *tbl = NULL;
	unsigned long int x = 0;

	tbl = malloc(sizeof(shash_table_t));

	if (tbl == NULL || size == 0)
		return (NULL);

	tbl->size = size;
	tbl->array = malloc(sizeof(shash_node_t *) * size);

	if (tbl->array == NULL)
		return (NULL);

	for (; x != size; x++)
		tbl->array[x] = NULL;

	tbl->shead = NULL;
	tbl->stail = NULL;

	return (tbl);
}

/**
 *
 *
 *
 *
 *
 */

int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *add = NULL, *tmp = NULL;
	unsigned long int idx = 0;

	if (ht == NULL || strlen(key) == 0)
		return (0);

	if (value == NULL)
		value = "";

	idx = (hash_djb2((const unsigned char *)key)) % ht->size;

	for (tmp = ht->shead; tmp; tmp = tmp->next)
	{
		if (strcmp(key, tmp->key) == 0)
		{
			free(tmp->value);
			tmp->value = strdup(value);
			return (1);
		}
	}

	add = malloc(sizeof(shash_node_t));
	if (add == NULL)
		return (0);

	add->key = strdup(key);
	add->value = strdup(value);
	add->next = ht->array[idx];
	ht->array[idx] = add;

	if (!ht->shead)
	{
		add->sprev = NULL;
		add->snext = NULL;
		ht->shead = add;
		ht->stail = add;
	}

        else if (strcmp(key, ht->shead->key) < 0)
        {
                add->sprev = NULL;
                add->snext = ht->shead;
                ht->shead->sprev = add;
                ht->shead = add;
        }

	else
	{
		for (tmp = ht->shead;
		     tmp->snext && strcmp(key, tmp->snext->key) > 0;
		     tmp = tmp->snext)
			;
		add->sprev = tmp;
		add->snext = tmp->snext;
		if (!tmp->snext)
			ht->stail = add;
		else
			tmp->snext->sprev = add;
		tmp->snext = add;
	}

	return (1);
}

/**
 *
 *
 *
 *
 */

char *shash_table_get(const shash_table_t *ht, const char *key)
{
	shash_node_t *tmp = NULL;
	unsigned long int idx = 0;

	if (!ht || !key || !(*key))
		return (NULL);

	idx = (hash_djb2((const unsigned char *)key)) % ht->size;

	if (ht->array[idx] == NULL)
		return (NULL);

	for (tmp = ht->shead; tmp; tmp = tmp->snext)
		if (strcmp(key, tmp->key) == 0)
			return (tmp->value);

	return (NULL);
}

/**
 *
 *
 *
 */

void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *ids = NULL;
	unsigned long int flag = 0;

	if (!ht)
		return;

	printf("{");

	for (ids = ht->shead; ids; ids = ids->snext)
	{
		if (flag == 1)
			printf(", ");
		printf("'%s': '%s'", ids->key, ids->value);
		flag = 1;
	}

	printf("}\n");
}

/**
 *
 *
 *
 */

void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *ids = NULL;
        unsigned long int flag = 0;

        if (!ht)
                return;

        printf("{");

        for (ids = ht->stail; ids; ids = ids->sprev)
        {
                if (flag == 1)
                        printf(", ");
                printf("'%s': '%s'", ids->key, ids->value);
                flag = 1;
        }

        printf("}\n");
}

/**
 *
 *
 *
 */

void shash_table_delete(shash_table_t *ht)
{
	shash_node_t *node = NULL, *delete = NULL;

	if (!ht || !ht->size || !ht->array)
		return;

	for (node = ht->shead; node; node = node->snext)
	{
		delete = node;
		free(delete->key);
		free(delete->value);
		free(delete);
	}

	free(ht->array);
	ht->array = NULL;
	ht->size = 0;

	free(ht);
}
