#include "list.h"
#include <stdlib.h>
void free_node(List *node);

void free_list(List *list) /* this function will free the memory off all elements in the list */
{
  List *something;
  while(list != NULL)
  {
    something = list;
    list = list->next;
    free_node(something);
  }
}

void free_node(List *node)
{
  free(node->str);
  free(node);
}
