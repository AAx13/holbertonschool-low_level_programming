#include <stdlib.h>
#include <string.h>
#include "hash_tables.h"

/**
 * hash_table_set - Adds an element to the hash table.
 * @ht: A hash table.
 * @key: Key used to index where the new element is stored.
 * @value: Values to store in the new element node.
 *
 * Return: 1 if succeeded, 0 otherwise.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	int sentinel;
	hash_node_t *new_node, *tmp_node;
	unsigned long int index;

	sentinel = 0;
	new_node = malloc(sizeof(hash_node_t));
	if (!new_node || !key || !ht || !value)
	{
		return (0);
	}

	index = key_index((const unsigned char *)key, ht->size);
	for (tmp_node = ht->array[index]; tmp_node; tmp_node = tmp_node->next)
	{
		if (strcmp(key, tmp_node->key) == 0)
		{
			*(tmp_node->value) = *value;
			sentinel++;
			free(new_node);
		}
	}

	if (sentinel == 0)
	{
		tmp_node = ht->array[index];
		ht->array[index] = new_node;
		new_node->next = tmp_node;
	}

	if (!ht->array[index])
	{
		ht->array[index] = new_node;
		new_node->next = NULL;
	}

	new_node->key = strdup(key);
	new_node->value = strdup(value);

	return (1);
}
