#include "cross_functions.h"

/* this function will print the top half of the X */
void print_top(int n)
{
  int i, x, begin, end;

  begin = 0;
  end = n - 1;

  for(x = 0; x < n / 2; x++) {
    for(i = 0; i < n; i++) {
      if(i == begin) {
        print_char('\\');
      } else if(i == end) {
        print_char('/');
      } else {
        print_char(' ');
      }
    }
    print_char('\n');
    begin++;
    end--;
  }
}

/* This function will print the middle row depending on user input */
void print_middle(int n)
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

/* This function will print the bottom half of the X */
void print_bottom(int n)
{
  int i, x, begin, end;

  if(n % 2 != 0) {
    begin = n / 2 - 1;
    end = n / 2 + 1;
  } else {
    begin = n / 2 - 1;
    end = n / 2;
  }

  for(x = 0; x < n / 2; x++) {
    for(i = 0; i < n; i++) {
      if(i == begin) {
        print_char('/');
      } else if(i == end) {
        print_char('\\');
      } else {
        print_char(' ');
      }
    }
    print_char('\n');
    begin--;
    end++;
  }
}
