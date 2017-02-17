#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint - add a new node at the beginning of a listint_t list.
 * @head: Current head node of type struct listint_t.
 * @n: Value passed to store into the node.
 *
 * Return: The newly created node: listint_t of type struct.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
