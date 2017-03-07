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
	hash_node_t *new_node, *temp_node;
	unsigned long int index;

	sentinel = 0;
	index = 0;
	new_node = malloc(sizeof(hash_node_t));
	if (!new_node || !key)
	{
		return (0);
	}
	index = key_index((const unsigned char *)key, ht->size);

	temp_node = *(ht->array + index);
	while (temp_node)
	{
		if (strcmp(key, temp_node->key) == 0)
		{
			temp_node->value = strdup(value);
			sentinel++;
		}
		temp_node = temp_node->next;
	}

	if (sentinel == 0)
	{
		temp_node = ht->array[index];
		ht->array[index] = new_node;
		new_node->next = temp_node;
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
