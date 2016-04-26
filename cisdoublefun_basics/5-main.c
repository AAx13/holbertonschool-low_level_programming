#include <stdio.h>
char odd(int n);
int print_char(char c);

int main(void)
{
   char c;

   c = odd(25);
   print_char(c);

   c = odd(30);
   print_char(c);

   c = odd(0);
   print_char(c);

   c = odd(13);
   print_char(c);

   print_char('\n');
   return (0);
}
