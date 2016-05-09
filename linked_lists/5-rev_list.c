#include "list.h"
#include <stdlib.h>
#include <stdio.h>

void rev_list(List **list)
{
  List *prev = NULL;
  List *node = *list;

  while(node != NULL)
  {
    node = node->next;
    node->next = prev;
    prev = *list;
    *list = node;
  }
}
