#include "list.h"
#include <stdlib.h>

void free_list(List *list) /* this function will free the memory off all elements in the list */
{
  while (list != NULL)
    {
        List *temp = list;
        free(temp);
        free(temp->str);
        list = list->next;
    }
}
