#include <stdlib.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position (n).
 * @head: Current head node of type struct listint_t.
 * @index: Desired Index to insert new node.
 * @n: Desired data to insert into new node (node->n).
 *
 * Return: The address of the new node, or NULL if it failed.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int index, int n)
{
	listint_t *cur_node;
	listint_t *new_node;
	unsigned int i;

	cur_node = *head;
	new_node = malloc(sizeof(listint_t));

	for (i = 0; cur_node != NULL; i++)
	{
		if (index == 0)
		{
			new_node->n = n;
			new_node->next = *head;
			*head = new_node;
			return (new_node);
		}
		else if (i == index - 1)
		{
			new_node->n = n;
			new_node->next = cur_node->next;
			cur_node->next = new_node;
			return (new_node);
		}
		else if (cur_node->next == NULL)
		{
			return (NULL);
		}
		cur_node = cur_node->next;
	}
	return (NULL);
}
