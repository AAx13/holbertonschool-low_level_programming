#include <stdlib.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * hash_table_delete - Deletes a  hash table.
 * @ht: A hash table.
 *
 * Return: Void.
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *node, *tmp_node;

	for (i = 0; i < ht->size; i++)
	{
		for (node = ht->array[i]; node;)
		{
			tmp_node = node;
			node = node->next;
			free(tmp_node->key);
			free(tmp_node->value);
			free(tmp_node);
		}
	}
	free(ht->array);
	free(ht);
}
