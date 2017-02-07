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
	listint_t *temp;
	unsigned int len;
	unsigned int i;

	len = 0;
	temp = head;

	while (temp)
	{
		temp = temp->next;
		len++;
	}

	if (!head || len < index)
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
