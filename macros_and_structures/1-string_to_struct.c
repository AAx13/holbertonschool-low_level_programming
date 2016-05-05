#include "str_struct.h"
#include <stdlib.h>
int str_length(char *str);

struct String *string_to_struct(char *str)
{
  struct String *ptrString;
  char *stringCpy;
  int i;

  i = 0;
  ptrString = malloc(sizeof(struct String));
  if(ptrString == NULL)
  {
    return NULL;
  }
  ptrString->length = str_length(str);

  stringCpy = malloc(ptrString->length); /* allocate memory the size of the string passed from struct String */
  while((str[i]) != '\0')        /* copy the string to newly allocated (char *) */
  {
    stringCpy[i] = str[i];
    i++;
  }

  ptrString->str = stringCpy;   /* change str element within the struct String */

  return ptrString;
}


int str_length(char *str)   /* this function returns the length of a string */
{
  int i;

  i = 0;
  while(str[i] != '\0')
  {
    i++;
  }
  return i;
}
