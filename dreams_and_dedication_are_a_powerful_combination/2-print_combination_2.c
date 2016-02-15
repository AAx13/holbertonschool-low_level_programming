#include "my_functions.h"

void print_combination_2(void){

  int i;
  int j;

  
  for( i = 0 ; i < 10 ; i++ ){
    
    for( j = 0 ; j < 10 ; j++){
      if(j > i){
      print_number(i);
      print_number(j);
      if(i < 8 && j <= 9){
      print_char(',');
      print_char(' ');
      }
      }
    }
  }
}

/* This function prints a combination of numbers excluding numbers that are doubles and numbers where the first digit is higher than the second digit using a nested for loop */
