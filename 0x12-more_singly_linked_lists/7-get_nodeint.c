#include <stdlib.h>
#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list.
 * @head: Current head node of type struct listint_t.
 * @index: Non negative Int passed as a parameter indicating index requested.
 *
 * Return: Node of type struct listint_t at index position. NULL if no node.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	size_t len;
	unsigned int i;

	len = listint_len(head) - 1;

	if (head == NULL || len < index)
	{
		return (NULL);
	}

	for (i = 0; i < len; i++)
	{
		if (i == index)
		{
			return (head);
		}
		head = head->next;
	}

	return (head);
}
