#include "my_functions.h"

void print_combination_1(void){

  int i;
  int n = 9;

  for(i = 0;i < n; i++){
    print_number(i);
    print_char(',');
    print_char(' ');
  }

  if(i == n){
    print_number(i);
  }
  
}
  
/* this function prints a number one at a time through a loop up to 8, the final if statement would print the last number 9 without a comma following it. */

  
