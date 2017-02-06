#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_listint - function that prints the values of each node and
 * returns the number of elements in a linked listint_t list.
 * @h: The head node in the linked list.
 *
 * Return: The size of the linked list or node count.
 */
size_t print_listint(const listint_t *h)
{
        size_t count;
        count = 0;

        while (h != NULL)
        {
                printf("%d\n", h->n);
                h = h->next;
                count++;
        }

        return count;
}
