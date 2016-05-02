#include <stdio.h>
#include <stdlib.h>
char *string_dup(char *);

int main()
{
  char *s;

  s = string_dup("Holberton l         klj          092     kljl");
  printf("%s\n", s);
  free(s);
  return (0);
}
