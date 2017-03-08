#include <stdio.h>
#include <stdlib.h>
#include "hash_tables.h"

/**
 * print_list - Prints list containing more than one node.
 * @ht: A hash table.
 * @buffer: Buffer contains keys from all elements in the array.
 * @x: Length of the buffer.
 *
 * Return: Void.
 */
void print_list(const hash_table_t *ht, unsigned long int *buffer,
		unsigned long int x)
{
	unsigned long int i;
	hash_node_t *node;

	for (i = 0; i < x; i++)
	{
		node = ht->array[buffer[i]];
		if (node->next)
		{
			while (node)
			{
				printf(", '%s': '%s'", node->key, node->value);
				node = node->next;
			}
		}
	}
}

/**
 * print_array - Prints array of nodes.
 * @ht: A hash table.
 * @buffer: Buffer contains keys from all elements in the array.
 * @x: Length of the buffer.
 *
 * Return: Void.
 */
void print_array(const hash_table_t *ht, unsigned long int *buffer,
		 unsigned long int x)
{
	unsigned long int i;
	hash_node_t *node;

	printf("{");
	for (i = 0; i < x; i++)
	{
		node = ht->array[buffer[i]];
		if (!node->next)
		{
			if (i == 0)
			{
				printf("'%s': '%s'", node->key, node->value);
			}
			else
			{
				printf(", '%s': '%s'", node->key, node->value);
			}
		}
		else
		{
			/* if there is more than one node */
			print_list(ht, buffer, x);
		}
	}
	printf("}\n");
}

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
	if (!ht || !ht->array)
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
			if (buffer[x] == buffer[x - 1])
			{
				break;
			}
			printf("%lu\n", buffer[x]);
			x++;
		}
	}
	print_array(ht, buffer, x);
}
