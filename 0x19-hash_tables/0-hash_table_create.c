#include <stdlib.h>
#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table.
 * @size: yep
 *
 * Return:
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_ht;
	unsigned long int i;

	new_ht = malloc(sizeof(hash_table_t));
	if(!new_ht || size < 1)
	{
		return (NULL);
	}
	new_ht->size = 0;

	new_ht->array = malloc(sizeof(hash_node_t *) * size);
	if(!new_ht->array)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		new_ht->array[i] = NULL;
	}

	new_ht->size = size;

	return (new_ht);
}
