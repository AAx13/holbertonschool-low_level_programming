#include "my_functions.h"

void positive_or_not(int n) /* This function accepts an argument in the form of an integer, for the purpose of printing positive, negative, and zero from the "positive_or_not" function */
{
  
  if (n > 0)
   
    print_char('P');
  else if (n == 0) {
    print_char('Z');
  }   else  {
    print_char('N');
  }
}
