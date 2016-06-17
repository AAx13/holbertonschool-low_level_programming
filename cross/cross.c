#include <unistd.h>
#include <stdlib.h>
int print_char(char c);
int print_string(char *);
int print_middle_row(int);
int print_top_row(int);
int print_bottom_row(int);

int main(int argc, char **argv)
{
  int i;
  i = atoi(argv[1]);

  if(argc != 2) {
    print_string("Usage: ./a.out <number to indicate size of cross>");
    print_char('\n');
    return 0;
  }

  if(i == 1) {
    print_char('X');
    print_char('\n');
    return 0;
  }

  print_top_row(i);
  print_char('\n');
  if (i % 2 != 0) {
    print_middle_row(i);
    print_char('\n');
  }
  print_bottom_row(i);
  print_char('\n');

  return 0;
}
