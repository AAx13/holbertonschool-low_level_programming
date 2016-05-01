#include <stdio.h>
int string_alpha(char *s);

int main()
{
  char s[] = "kdsjlfkjlkdj";
  int x;

  x = string_alpha(s);
  printf("%d\n", x);

  return 0;
}
