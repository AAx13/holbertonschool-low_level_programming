#include <stdlib.h>
#include <unistd.h>

int print_char(char c)            /* takes a character and prints it without using standard libraries */
{
  return (write(1, &c, 1));
}

char *string_dup(char *str){      /* this program will iterate through a string and
                                  allocate the exact amount of memory for a string */
  int i;

  for(i = 0; str[i] != '\0'; i++){
    print_char(str[i]);
  }

  str = malloc(i);

  return str;
}
