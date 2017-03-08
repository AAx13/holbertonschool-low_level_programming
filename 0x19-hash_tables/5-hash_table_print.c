#include <stdio.h>
#include <stdlib.h>
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
	unsigned long int *buffer;
	hash_node_t *node;

	x = 0;
	if (!ht)
	{
		return;
	}

	buffer = malloc(sizeof(int) * ht->size);
	for (i = 0; i < ht->size; i++)
	{
		for (node = ht->array[i]; node; node = node->next)
		{
			buffer[x] = key_index(
				(const unsigned char *)node->key, ht->size);
			x++;
		}
	}


	for (i = 0; i < x; i++)
	{
		node = ht->array[buffer[i]];
		if (i == 0)
		{
			printf("{'%s': '%s', ", node->key, node->value);
		}
		else if (i == x - 1)
		{
			printf("'%s': '%s'}", node->key, node->value);
		}
		else if (buffer[i] == buffer[i + 1])
		{
			for (node = ht->array[buffer[i]], node = node->next;
			     node; node = node->next)
			{
				printf("'%s': '%s', ", node->key, node->value);
			}
		}
		else if (i > 0 && i < (x - 1))
		{
			printf("'%s': '%s', ", node->key, node->value);
		}
	}
	printf("\n");
}
