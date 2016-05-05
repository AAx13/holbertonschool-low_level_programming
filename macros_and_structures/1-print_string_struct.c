#include "str_struct.h"
#include <stdio.h>
#include <unistd.h>

int print_char(char c)
{
  return (write(1, &c, 1));
}

void print_string_struct(struct String *str)
{
  printf("%s, %d\n", str->str, str->length);
}
