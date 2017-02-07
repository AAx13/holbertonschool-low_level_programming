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

/* free_listint2 - free a list of type struct listint_t, set node to NULL. */
void free_listint2(listint_t **head);

/* pop_listint - deletes the head node of a listint_t linked list. */
int pop_listint(listint_t **head);

/* get_nodeint_at_index - returns the nth node of a listint_t linked list. */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index);

#endif /* LISTS */
