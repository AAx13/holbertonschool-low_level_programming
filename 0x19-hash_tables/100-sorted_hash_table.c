#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "hash_tables.h"

/**
 * shash_table_delete - Deletes a hash table.
 * @ht: A hash table.
 *
 * Return: Void.
 */
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

/**
 * shash_table_print_rev - Prints a sorted linked list in reverse order.
 * @ht: A hash table.
 *
 * Return: Void.
 */
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

/**
 * shash_table_get - Function that retrieves a value associated with a key.
 * @ht: A hash table to look into.
 * @key: Key to look for.
 *
 * Return: Value associated with the key. NULL if not found.
 */
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

/**
 * shash_table_print - Prints a sorted linked list.
 * @ht: A hash table.
 *
 * Return: Void.
 */
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

/**
 * shash_table_sort - sorts the sorted linked list alphabetically.
 * @ht: A hash table.
 * @new: A new node.
 * @tmp: A temporary node to track either next or previous node pointers.
 *
 * Return: Void.
 */
void shash_table_sort(shash_table_t *ht, shash_node_t *new, shash_node_t *tmp)
{
	shash_node_t *pre = new;

	if (!ht->shead) /* if no nodes in sorted list */
	{
		ht->shead = new;
		ht->stail = new;

		new->sprev = NULL;
		new->snext = NULL;
	}
	else /* add and sort new node */
	{
		tmp = ht->shead;
		while (tmp->snext && strcmp(new->key, tmp->key) > 0)
		{
			tmp = tmp->snext;
		}
		if (tmp == ht->shead && ht->stail != tmp)
		{
			ht->shead = new;
			new->snext = tmp;
			new->sprev = NULL;
			tmp->sprev = new;
		}
		else if (!tmp->snext && strcmp(new->key, tmp->key) > 0)
		{
			tmp->snext = new;
			new->sprev = tmp;
			new->snext = NULL;
			ht->stail = new;
		}
		else
		{
			pre = tmp->sprev;
			pre->snext = new;
			new->snext = tmp;
			new->sprev = pre;
			tmp->sprev = new;
		}
	}
}

/**
 * shash_table_set - Adds an element to the hash table.
 * @ht: A hash table.
 * @key: Key used to index where the new element is stored.
 * @value: Values to store in the new element node.
 *
 * Return: 1 if succeeded, 0 otherwise.
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned int sentinel;
	shash_node_t *new_node, *tmp_node;
	unsigned long int index;

	sentinel = 0;
	new_node = malloc(sizeof(shash_node_t));
	if (!new_node || !key || !ht || !value)
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
	shash_table_sort(ht, new_node, tmp_node);

	return (1);
}

/**
 * shash_table_create - Creates a hash table.
 * @size: Size of the array.
 *
 * Return: Pointer to new hash table.
 */
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
