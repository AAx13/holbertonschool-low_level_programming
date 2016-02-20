#include <stdio.h>

void print_to_98(int n){  /* This function prints numbers in order and always ends them with 98 */
  
  int i;
  
  for( i = n ; i < 98 ; i++)
    printf("%d ,",i);
  
  for( i = n ; i > 98 ; i--)
    printf("%d ,",i);
  
  printf("98\n");
 
}
  
