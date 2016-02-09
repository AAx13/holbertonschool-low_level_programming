#include "my_functions.h"

void print_alphabet(void) /* This function iterates through the letters of the alphabet and prints them */
{
  char c;
  
  for (c='a'; c<='z';c++)
    print_char(c);
}
