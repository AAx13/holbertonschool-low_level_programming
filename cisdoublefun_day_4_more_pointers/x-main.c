#include <stdio.h>
int string_upper(char *s);

int main()
{
  char s[] = "";
  int x;

  x = string_upper(s);
  printf("%d\n", x);

  return 0;
}
