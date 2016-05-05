#include "str_struct.h"
#include <stdio.h>
#include <unistd.h>
void print_number(int n);

int print_char(char c)
{
  return (write(1, &c, 1));
}

/* this function will print the content of struct String */
void print_string_struct(struct String *str)
{
  int i;

  i = 0;
  while((str->str[i]) != '\0')
  {
    print_char(str->str[i]);
    i++;
  }
  print_char(',');
  print_char(' ');
  print_number(str->length);
  print_char('\n');
}

/* this function will print any number to console */
void print_number(int n){

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
