#include "my_functions.h"

void print_number(int n){

 int ncopy=n;
 int count=1;
 int split=1;
 
  while (ncopy > 9){
    ncopy=ncopy/10;
    split=split*10;
    count++;
   }

  for (ncopy=n/split;ncopy>9;split=split/10){
    ncopy=ncopy/split;
    print_char('n');
   }

  while (ncopy == 0){
    print_char('0');
   }

}










  

    
  
