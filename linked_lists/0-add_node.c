#include <stdlib.h>
#include "list.h"
#include <stdio.h>
int str_length(char *str);

int add_node(List **list, char *content)  /* this function will add a new node to a linked list */
{
  List *node1;
  int i;
  int len;
  char *newstr;

  node1 = malloc(sizeof(List));         /* allocate memory to match the size of the previous struct */
  if(node1 == NULL)
  {
    return 1;
  }

  len = str_length(content);            /* return the length of the string soon to be copied */
  newstr = malloc(sizeof(char) * (len + 1));   /* allocating enough memory to store a copy of the string */
  if(newstr == NULL)
  {
    return 1;
  }

  for(i = 0; content[i] != '\0'; i++)   /* this loop will copy a string to newly allocated area */
  {
    newstr[i] = content[i];
  }
  newstr[i] = '\0';



  node1->str = newstr;
  node1->next = *list;    /* change next within the struct to point to the address of the next element which was the first previously */
  *list = node1;         /* change the address of the first element in the list to the new node */

  return 0;
}

int str_length(char *str)    /* this function returns the length of a string */
{
  int i;
  for(i = 0; str[i] != '\0'; i++);
  return i;
}
