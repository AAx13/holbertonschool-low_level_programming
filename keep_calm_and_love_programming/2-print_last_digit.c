#include "my_functions.h"

void print_last_digit(int n){

  n = n % 10;

  if(n < 0){
    n=-n;
  }

  print_char(n + '0');
}
    

      
    
