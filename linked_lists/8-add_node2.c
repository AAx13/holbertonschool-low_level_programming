#include <stdlib.h>
#include "list.h"
#include <stdio.h>
int str_length(char *str);

int add_node(List **list, char *content)  /* this function will add a new node to a linked list */
{
  List *node1;
  List *end;
  int i;
  int len;
  char *newstr;

  node1 = malloc(sizeof(List));         /* allocate memory to match the size of the previous struct */

  len = str_length(content);            /* return the length of the string soon to be copied */
  newstr = malloc(sizeof(char) * len);   /* allocating enough memory to store a copy of the string */
  for(i = 0; content[i] != '\0'; i++)   /* this loop will copy a string to newly allocated area */
  {
    newstr[i] = content[i];
  }
  newstr[i] = '\0';               /* add a null terminator to the string */
  node1->str = newstr;            /* initiate node1->str as holding the pointer to the newly allocated and stored string */
  node1->next = NULL;           /* assign node->next as holding the NULL pointer since this node will be at the end of the list */

  if(*list == NULL)         /* this if statement checks to ensure there is something in the first node */
  {
    *list = node1;      /* if there isn't anything in the first node, have that node point to the address of the newly created node */
  }

  /* this loop will iterate through each node until it reaches a node that points to a node pointing to NULL */
  for(end = *list; end != NULL; end = end->next);

  end = node1;  /* affect pointer end with the address of node1 */

  if(node1 == NULL)
  {
    return 1;
  }
  return 0;
}

int str_length(char *str)    /* this function returns the length of a string */
{
  int i;
  for(i = 0; str[i] != '\0'; i++);
  return i;
}
