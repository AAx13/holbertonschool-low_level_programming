#include <unistd.h>

int print_char(char c)
{
  return write(1, &c, 1);
}

int print_string(char *s)
{
  int i;

  for(i = 0; s[i] != '\0'; i++) {
    print_char(s[i]);
  }
  return 0;
}
