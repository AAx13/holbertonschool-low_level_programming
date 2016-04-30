#include <limits.h>

int power(int x, int y) /* this function will calculate the power (int y) of a number (int x) */
{
  int i;
  int number;

  i = 1;
  number = x;
  while(i < y)             /* this loop will calculate the power of a number */
  {
    number = number * x;
    i++;
  }
  if(y == 0 || number == 0)
  {
    return 1;
  } else if(number < 0 || y < 0)    /* if either number in the expression is a negative number, return -1 */
  {
    return -1;
  } else if(number > INT_MAX / x)    /* return -1 if number is bigger than INT_MAX */
  {
    return -1;
  }
  return number;
}
