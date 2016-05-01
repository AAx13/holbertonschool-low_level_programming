#include <stdio.h>
int string_lower(char *s);

int main()
{
  char s[] = "sssssss";
  int x;

  x = string_lower(s);
  printf("%d\n", x);

  return 0;
}
