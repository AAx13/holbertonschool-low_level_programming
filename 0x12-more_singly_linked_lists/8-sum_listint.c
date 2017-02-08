#include <stdlib.h>
#include "lists.h"

int sum_listint(listint_t *head)
{
	listint_t *temp;
	int sum;

	if (!head)
	{
		return (0);
	}
	temp = head;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}
