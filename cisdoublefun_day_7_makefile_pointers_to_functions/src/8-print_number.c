#include <unistd.h>

int print_char(char c)
{
  return (write(1, &c, 1));
}

void print_number(int n)
{
  int ncopy=n;
  int power=10;
  int print;

  while (ncopy > 9 || ncopy < -9){
    ncopy=(ncopy / 10);
    power= power * 10;
  }

  ncopy= n;

  if(ncopy < 0){
    print_char('-');
  }

  power = power / 10;

  if(n > 0){
    ncopy= n * -1;
  }

  while (ncopy < 0){
    print= ncopy / power;
    ncopy= ncopy % power;
    power= power / 10;
    print = print * -1;
    print_char(print + '0');
  }

  if (n == 0){
    print_char('0');
  }
}
