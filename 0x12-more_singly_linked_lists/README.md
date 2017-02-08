# Singly Linked List Project

## Project Requirements
* Allowed editors: vi, vim, emacs.
* All your files will be compiled on Ubuntu 14.04 LTS.
* Your programs and functions will be compiled with gcc 4.8.4 using the flags:
  -Wall -Werror -Wextra and -pedantic.
* All your files should end with a new line.
* You are not allowed to use global variables.
* No more than 5 functions per file.
* The only C standard library functions allowed are malloc, free and exit.
  Any use of functions like printf, puts, calloc, realloc etc... is forbidden.
* The prototypes of all your functions should be included
  in your header file called lists.h.
* Don't forget to push your header file.
* All your header files should be include guarded.
* Please use this data structure for this project:

```c
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
```

## Functions
```c
/*
 * print_listint - function that prints the values of each node and
 * returns the number of elements in a linked listint_t list.
 */
size_t print_listint(const listint_t *h);
```

```c
/* listint_len - function that returns the number of elements. */
size_t listint_len(const listint_t *h);
```

```c
/* add_nodeint - add a new node at the beginning of a listint_t list. */
listint_t *add_nodeint(listint_t **head, const int n);
```

```c
/* add_nodeint_end - add a new node at the end of a listint_t list. */
listint_t *add_nodeint_end(listint_t **head, const int n);
```

```c
/* free_listint - free a list of type struct listint_t. */
void free_listint(listint_t *head);
```

```c
/* free_listint2 - free a list of type struct listint_t, set node to NULL. */
void free_listint2(listint_t **head);
```

```c
/* pop_listint - deletes the head node of a listint_t linked list. */
int pop_listint(listint_t **head);
```

```c
/* get_nodeint_at_index - returns the nth node of a listint_t linked list. */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index);
```

```c
/* sum_listint - returns the sum of all the data (n) of a linked list. */
int sum_listint(listint_t *head);
```

```c
/* insert_nodeint_at_index - inserts a new node at a given position (n). */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int index, int n);

```

```c
/* delete_nodeint_at_index - deletes a node at index of a linked list. */
int delete_nodeint_at_index(listint_t **head, unsigned int index);
```