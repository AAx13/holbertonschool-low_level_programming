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
	unsigned long int i, first, last, len, sentinel;
	hash_node_t *node;

	len = 0;
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i])
		{
			len++;
		}
	}

	first = 1;
	last = len;
	sentinel = 0;
	for (i = 0; i < ht->size; i++)
	{
		for (node = ht->array[i]; node; node = node->next)
		{
			sentinel++;
			if (sentinel == first)
			{
				printf("{'%s': '%s', ", node->key, node->value);
			}
			else if(sentinel == last)
			{
				printf("'%s': '%s'}\n", node->key, node->value);
			}
			else
			{
				printf(" '%s': '%s', ", node->key, node->value);
			}
		}
	}


}
