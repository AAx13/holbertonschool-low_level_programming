#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int index, int n);

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	listint_t *head;

	head = NULL;
	add_nodeint_end(&head, 0);
	add_nodeint_end(&head, 1);
	add_nodeint_end(&head, 2);
	add_nodeint_end(&head, 3);
	add_nodeint_end(&head, 4);
	add_nodeint_end(&head, 98);
	add_nodeint_end(&head, 402);
	add_nodeint_end(&head, 1024);
	print_listint(head);
	printf("-----------------\n");
	insert_nodeint_at_index(&head, 0, 4096);
	print_listint(head);
	free_listint2(&head);
	return (0);
}
