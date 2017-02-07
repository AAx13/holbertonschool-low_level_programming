#ifndef LISTS
#define LISTS

/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 * for Holberton project
 */
typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;

int _putchar(char c);

/*
 * print_listint - function that prints the values of each node and
 * returns the number of elements in a linked listint_t list.
 */
size_t print_listint(const listint_t *h);

/* listint_len - function that returns the number of elements. */
size_t listint_len(const listint_t *h);

/* add_nodeint - add a new node at the beginning of a listint_t list. */
listint_t *add_nodeint(listint_t **head, const int n);

/* add_nodeint_end - add a new node at the end of a listint_t list. */
listint_t *add_nodeint_end(listint_t **head, const int n);

/* free_listint - free a list of type struct listint_t. */
void free_listint(listint_t *head);

#endif /* LISTS */
