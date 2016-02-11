#include "my_functions.h"

void print_number(int n){



  int ncopy;
  int print;
  int split;
 
  if (n < 0)
   {
     (n = n*-1);
   }

  else
  
  if (n==0)
  {
  print_char(n+48);
  }
  else


    {
	
      
  for (split = 1, ncopy = n ; ncopy>10 ; ncopy=ncopy/10, split = split*10)
  {
  }


  for (print = n/split ; print > 0 ; split = split / 10 , n = n - split * print )
  {
  print_char(print);

  }

 }

  
}
    
  
