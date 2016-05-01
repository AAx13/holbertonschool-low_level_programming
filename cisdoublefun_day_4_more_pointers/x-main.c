#include <stdio.h>
int string_digit(char *s);

int main()
{
  char s[] = "12   1  ";
  int x;

  x = string_digit(s);
  printf("%d\n", x);

  return 0;
}
