#include "list.h"
#include <stdlib.h>

void free_list(List *list) /* this function will free the memory off all elements in the list */
{
  List *newNode;

  for(newNode = list; newNode != NULL; newNode = newNode->next)
  {
    free(newNode->str);
    free(newNode);
  }
}
