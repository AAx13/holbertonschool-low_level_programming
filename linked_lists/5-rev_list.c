#include "list.h"
#include <stdlib.h>

void rev_list(List **list)
{
  List *first;
  List *prev = NULL;
  List *next;

  while(*list)
  {
    next = list->next;
    list->next = prev;
    prev = *list;
    *list = next;
  }

}
