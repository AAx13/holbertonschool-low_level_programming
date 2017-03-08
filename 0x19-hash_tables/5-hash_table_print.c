#include <stdio.h>
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
	hash_node_t *node;

	x = 0;
	if (!ht || !ht->array)
	{
		return;
	}

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		for (node = ht->array[i]; node; node = node->next)
		{
			if (x == 0)
			{
				printf("'%s': '%s'", node->key, node->value);
			}
			else
			{
				printf(", '%s': '%s'", node->key, node->value);
			}
			x++;
		}
	}
	printf("}\n");
}
