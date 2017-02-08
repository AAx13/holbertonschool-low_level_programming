#include <stdlib.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node at index of a linked list.
 * @head: Current head node of type struct listint_t.
 * @index: Desired Index to delete node.
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *cur_node;
	listint_t *temp_node;
	unsigned int i;

	cur_node = *head;

	for (i = 0; cur_node != NULL; i++)
	{
		if (index == 0)
		{
			*head = cur_node->next;
			free(cur_node);
			return (1);
		}
		else if (i == index - 1)
		{
			temp_node = cur_node->next;
			cur_node->next = temp_node->next;
			free(temp_node);
			return (1);
		}
		cur_node = cur_node->next;
	}
	return (-1);
}

