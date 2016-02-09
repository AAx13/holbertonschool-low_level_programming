#include "my_functions.h"

void print_base16(void) /* This function prints the numbers of base 16, from 0-F */
{
  char c;

  for (c='0'; c<='9'; c++)	
    print_char(c);

  for (c='A'; c<='F'; c++)
    print_char(c);

}
