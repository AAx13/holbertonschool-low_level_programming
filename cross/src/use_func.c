#include <unistd.h>

/* This function will take a character and write to stdout */
int print_char(char c)
{
  return write(1, &c, 1);
}

/* This function returns the length of a string */
int string_len(char *s)
{
  int i = 0;
  while(s[i] != '\0')
    i++;
  return i;
}

/* This function will print a string by iterating through the string and printing character by character */
void print_string(char *s)
{
  write(1, s, string_len(s));
}
