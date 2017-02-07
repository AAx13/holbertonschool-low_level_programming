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

	if (head == NULL || *head == NULL)
	{
		return (0);
	}

	nex_node = (*head)->next;
	free(*head);

	if (nex_node == NULL)
	{
		return (0);
	}

	*head = nex_node;

	return (nex_node->n);
}
