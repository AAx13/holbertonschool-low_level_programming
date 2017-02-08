#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list.
 * @head: Current head node of type struct listint_t.
 *
 * Return: The head node's data (int).
 */
int pop_listint(listint_t **head)
{
	listint_t *nex_node;
	int temp;

	if (head && *head)
	{
		if ((*head)->next != NULL)
		{
			nex_node = (*head)->next;
		}
		temp = (*head)->n;
		free(*head);
		*head = nex_node;
	}
	else
	{
		return (0);
	}

	return (temp);
}

