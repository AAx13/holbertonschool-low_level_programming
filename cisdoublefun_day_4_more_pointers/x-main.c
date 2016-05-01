#include <stdio.h>
int string_printable(char *s);

int main()
{
  char s[] = "";
  int x;

  x = string_printable(s);
  printf("%d\n", x);

  return 0;
}
