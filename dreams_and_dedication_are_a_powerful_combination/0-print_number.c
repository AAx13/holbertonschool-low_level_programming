#include "my_functions.h"

void print_number(int n){
  
 int ncopy=n;
 int power=10;
 int print;


 if (n < 0){
   n = n * -1;
   print_char('-');
 }

 ncopy = n;

 while (ncopy > 9){
    ncopy=(ncopy / 10);
    power= power * 10;
   }

 power = power / 10;
 ncopy = n;
 
  while (ncopy > 0){
    print= ncopy / power;
    ncopy= ncopy % power;
    power= power / 10;
    print_char(print + '0');
  }

  if (n == 0){
    print_char('0');
    }

}
