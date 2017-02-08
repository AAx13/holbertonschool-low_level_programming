# Singly Linked Lists Project

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
