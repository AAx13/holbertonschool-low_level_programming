#include "str_struct.h"
#include <stdlib.h>
int str_length(char *str);

struct String *string_to_struct(char *str)
{
  struct String *ptrString;

  ptrString = malloc(sizeof(struct String));
  if(ptrString == NULL)
  {
    return NULL;
  }
  ptrString->str = str;
  ptrString->length = str_length(str);

  return ptrString;
}


int str_length(char *str)
{
  int i;

  i = 0;
  while(str[i] != '\0')
  {
    i++;
  }
  return i;
}
