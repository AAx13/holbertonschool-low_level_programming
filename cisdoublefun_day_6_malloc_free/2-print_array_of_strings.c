#include <unistd.h>

int print_char(char c)              /* this function will print a character */
{
  return (write(1, &c, 1));
}

void print_array_of_strings(char **a)  /* this function will print the content of an array of strings */
{
  int i, j;

  i = 0, j = 0;
  while(a[i] != '\0')       /* loop through the array */
  {
    while(a[i][j] != '\0')   /* loop through every string in the array and print them */
    {
      print_char(a[i][j]);
      j++;
    }
    print_char(' ');  /* ensure there are spaces between every string within the array */
    j = 0;            /* reset the count that will iterate the strings within the array */
    i++;
  }
  print_char('\n');  /* ensure there is a return at the end of the strings */
}
