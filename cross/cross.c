#include <unistd.h>
#include <stdlib.h>
#include "cross_functions.h"

/* This function will take a number from user input and print an X of that size */
int main(int argc, char **argv)
{
  int i;

  /* If no argument given correct user with Usage error */
  if(argc != 2) {
    print_string("Usage: ./a.out <number to indicate size of cross>");
    print_char('\n');
    return 0;
  }

  i = atoi(argv[1]);

  if(i == 1) {
    print_char('X');
    print_char('\n');
    return 0;
  }

  print_top(i);
  if (i % 2 != 0) {
    print_middle(i);
    print_char('\n');
  }
  print_bottom(i);

  return 0;
}
