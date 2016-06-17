#include <unistd.h>
#include <stdlib.h>

int print_char(char c)
{
  return write(1, &c, 1);
}

void print_top_row(int n, int x)
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

void print_middle_row(int n)
{
  int i;

  for(i = 0; i < n; i++) {
    if(i == n / 2) {
      print_char('X');
    } else {
      print_char(' ');
    }
  }
}

void print_bottom_row(int n)
{
  int i;

  for(i = 0; i < n; i++) {
    if(i == 0) {
      print_char(47);
    } else if (i == n - 1) {
      print_char(92);
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
  int j;
  i = atoi(argv[1]);

  if(argc != 2) {
    print_string("Usage: ./a.out <number to indicate size of cross>");
    print_char('\n');
  }

  if(i == 1) {
    print_char('X');
    print_char('\n');
    return 0;
  }


  for(j = 0; j < i / 2; j++) {
    print_top_row(i - j);
    print_char('\n');
  }

  if (i % 2 != 0) {
    print_middle_row(i);
    print_char('\n');
  }

  print_bottom_row(i);
  print_char('\n');

  return 0;
}
