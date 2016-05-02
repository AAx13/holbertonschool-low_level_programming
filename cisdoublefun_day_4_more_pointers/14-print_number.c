#include <unistd.h>
#include <stdio.h>

int print_char(char c)
{
  return (write(1, &c, 1));
}

void print_number(int n)
{
  /* first get the digits and how many digits */
  int i, ncopy, print;

  i = 1, ncopy = n;
  while (ncopy > 0)
  {
    ncopy /= 10;
    i *= 10;
  }

  ncopy = n;
  i /= 10;

  while(ncopy > 0)
  {
    print = ncopy / 10;
    ncopy = ncopy - 10 * ncopy;
  }
}
