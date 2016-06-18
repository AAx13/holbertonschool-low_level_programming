#include <unistd.h>

/* This function will take a character and write to stdout */
int print_char(char c)
{
  return write(1, &c, 1);
}

/* This function will print a string by iterating through the string and printing character by character */
void print_string(char *s)
{
  int i;

  for(i = 0; s[i] != '\0'; i++) {
    print_char(s[i]);
  }
}
