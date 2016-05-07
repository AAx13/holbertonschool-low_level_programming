#include <stdio.h>
#include "list.h"

int list_size(List *list) /* this function will iterate through the list and count the nodes */
{
  List *node1;
  int i;

  for(node1 = list; node1 != NULL; node1 = node1->next)
  {
    i++;
  }
  return i;
}
