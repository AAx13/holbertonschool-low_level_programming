#include <stdlib.h>
#include "str_struct.h"

/* this function will free allocated memory space at struct String as well as a string element within the structure */
void free_string_struct(struct String *str)
{
  free(str->str);
  free(str);
}
