#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - free a list of type struct listint_t.
 * @head: Current head node of type struct listint_t.
 *
 * Return: Void.
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
