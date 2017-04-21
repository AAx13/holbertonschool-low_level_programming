#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "hash_tables.h"

void shash_table_delete(shash_table_t *ht)
{
	unsigned long int i;
	shash_node_t *node, *tmp_node;

	if (!ht)
	{
		return;
	}

	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		while (node)
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

void shash_table_print_rev(const shash_table_t *ht)
{
	int x;
	shash_node_t *node;

	x = 0;
	if (!ht || !ht->stail)
	{
		return;
	}

	printf("{");
	for (node = ht->stail; node; node = node->sprev)
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
	printf("}\n");
}

char *shash_table_get(const shash_table_t *ht, const char *key)
{
	shash_node_t *node;
	unsigned long int index;

	if (!ht || !key)
	{
		return (NULL);
	}

	index = key_index((const unsigned char *)key, ht->size);
	for (node = ht->array[index]; node; node = node->next)
	{
		if (strcmp(key, node->key) == 0)
		{
			return (node->value);
		}
	}

	return (NULL);
}

void shash_table_print(const shash_table_t *ht)
{
	int x;
	shash_node_t *node;

	x = 0;
	if (!ht || !ht->shead)
	{
		return;
	}

	printf("{");
	for (node = ht->shead; node; node = node->snext)
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
	printf("}\n");
}

int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned int sentinel;
	shash_node_t *new_node, *tmp_node, *pre_node;
	unsigned long int index;

	sentinel = 0;
	new_node = malloc(sizeof(shash_node_t));
	if (!new_node || !key || !ht)
	{
		return (0);
	}

	index = key_index((const unsigned char *)key, ht->size);
	for (tmp_node = ht->array[index]; tmp_node; tmp_node = tmp_node->next)
	{
		/* update/collision handling */
		if (strcmp(key, tmp_node->key) == 0)
		{
			free(tmp_node->value);
			tmp_node->value = strdup(value);
			sentinel++;
			free(new_node);
			return (1);
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

	if (!ht->shead) /* if no nodes in sorted list */
	{
		ht->shead = new_node;
		ht->stail = new_node;

		new_node->sprev = NULL;
		new_node->snext = NULL;
	}
	else /* add and sort new node */
	{
		tmp_node = ht->shead;
		while (tmp_node->snext && strcmp(new_node->key, tmp_node->key) > 0)
		{
		        tmp_node = tmp_node->snext;
		}

		if (tmp_node == ht->shead)
		{
			ht->shead = new_node;
			new_node->snext = tmp_node;
			new_node->sprev = NULL;
			tmp_node->sprev = new_node;
		}
		else if (tmp_node->snext == NULL)
		{
			tmp_node->snext = new_node;
			new_node->sprev = tmp_node;
			new_node->snext = NULL;
			ht->stail = new_node;
		}
		else
		{
			pre_node = tmp_node->sprev;
			pre_node->snext = new_node;
			new_node->snext = tmp_node;
			new_node->sprev = pre_node;
			tmp_node->sprev = new_node;
		}
	}

	return (1);
}

shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *new_ht;
	unsigned long int i;

	new_ht = malloc(sizeof(shash_table_t));
	if (!new_ht || size < 1)
	{
		return (NULL);
	}

	new_ht->array = malloc(sizeof(shash_node_t *) * size);
	if (!new_ht->array)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		new_ht->array[i] = NULL;
	}

	new_ht->size = size;
	new_ht->shead = NULL;
	new_ht->stail = NULL;

	return (new_ht);
}
