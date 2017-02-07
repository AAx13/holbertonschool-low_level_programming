#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - free a list of type struct listint_t and set node to NULL.
 * @head: Current head node of type struct listint_t.
 *
 * Return: Void.
 */
void free_listint2(listint_t **head)
{
	listint_t **temp;

	while (*head != NULL)
	{
		temp = head;
		*head = (*head)->next;
		free_listint(*temp);
		*temp = NULL;
	}
}
