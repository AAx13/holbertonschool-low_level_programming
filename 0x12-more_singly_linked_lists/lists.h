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

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c);

/**
 * print_listint - function that prints the values of each node and
 * returns the number of elements in a linked listint_t list.
 * @h: The head node in the linked list.
 *
 * Return: The size of the linked list or node count.
 */
size_t print_listint(const listint_t *h);

 /**
  * listint_len - function that returns the number of elements
  * in a linked list.
  * @h: The head node in the linked list.
  *
  * Return: The size of the linked list or node count.
  */
size_t listint_len(const listint_t *h);

/**
 * add_nodeint - add a new node at the beginning of a listint_t list.
 * @head: Current head node of type struct listint_t.
 * @n: Value passed to store into the node.
 *
 * Return: The newly created node: listint_t of type struct.
 */
listint_t *add_nodeint(listint_t **head, const int n);

#endif
