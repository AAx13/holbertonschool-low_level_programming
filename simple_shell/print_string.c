#include <unistd.h>
void print_char(char c);


void print_string(char *str) /* this function will print a string */
{
  int i;

  for(i = 0; str[i] != '\0'; i++) {
    print_char(str[i]);
  }
}
