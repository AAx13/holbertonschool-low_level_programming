#include <stdlib.h>
#include "list.h"
int str_length(char *str);


List *params_to_list(int ac, char **av)
{
  
}

int str_length(char *str)
{
  int i;
  for(i = 0; str[i] != '\0'; i++);
  return i;
}
