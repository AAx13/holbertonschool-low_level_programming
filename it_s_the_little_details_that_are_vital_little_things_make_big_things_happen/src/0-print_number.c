#include "../inc/holbertonschool.h"
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




/* This function takes a given number and prints it */
/* In order to do this consiering I did not use any of the standard libraries to acheive this, I had to figure out how to tell the computer two things. */
/* 1. How to tell the computer what numbers needed to be printed by identifying each digit */
/* 2. Identifying how many digits there are. */
