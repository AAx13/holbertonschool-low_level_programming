#include <limits.h>

int first_digit(int n){
  
  int ncopy = n;    /* This function returns the first digit of a given number */
  
  if(ncopy == 0){    /* if the number is 0 return it */
    return(n); 
  }
 
  if(ncopy > 0){    /* if the number is positive change it to negative */
    ncopy=-ncopy;
 }
  
  while(ncopy < -9){    /* divide the negative number down to the last digit */
    ncopy = ncopy / 10;
  }
  
  ncopy=-ncopy;     /* change the single number back to positive and return it */
  return(ncopy);
}
