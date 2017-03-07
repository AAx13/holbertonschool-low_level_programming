#include <stdio.h>
#include <limits.h>
#include "hash_tables.h"

/**
 * hash_table_print - Prints a hash table.
 * @ht: A hash table.
 *
 * Return: Void.
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i, x;
	unsigned long int buffer[5000];
	hash_node_t *node;

	x = 0;
	for (i = 0; i < ht->size; i++)
	{
		for (node = ht->array[i]; node; node = node->next)
		{
			buffer[x] = key_index((const unsigned char *)node->key, ht->size);
			x++;
		}
	}

	for (i = 0; i < x; i++)
	{
		node = ht->array[buffer[i]];
		if (i == 0 || buffer[i] == buffer[i + 1])
		{
			printf("{'%s': '%s', ", node->key, node->value);
		}
		else if (i == x - 1 || buffer[i] == buffer[i - 1])
		{
			printf("'%s': '%s'}", node->key, node->value);
		}
		else
		{
			printf(" '%s': '%s',", node->key, node->value);
		}
	}
	printf("\n");
}
