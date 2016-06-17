#include <unistd.h>
#include <stdio.h>

int print_char(char c)
{
  return write(1, &c, 1);
}

void print_row(int n)
{
  int i;

  for(i = 0; i < n; i++) {
    if(i == 0) {
      print_char(92);
    } else if (i == n - 1) {
      print_char(47);
    } else {
      print_char(' ');
    }
  }
}

void print_string(char *s)
{
  int i;

  for(i = 0; s[i] != '\0'; i++) {
    print_char(s[i]);
  }
}

int main(int argc, char **argv)
{

  int i;

  i = argv[0][0];

  if (argc != 2) {
    print_string("Usage: ./a.out <number to indicate size of cross>");
    print_char('\n');
    return 0;
  }

  print_row(i);
  return 0;
}
