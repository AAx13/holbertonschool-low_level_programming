#include <limits.h>

int power(int x, int y)         /* this function will recursively calculate the power (int y) of a number (int x) */
{
  if(y < 0 || x < 0)
  {
    return -1;
  } else if(x == 0 || y == 0)
  {
    return 1;
  } else if(x > INT_MAX / power(x, (y - 1)))       /* this if statement will return -1 if the result is bigger than INT_MAX */
  {
     return -1;
  }
  return x * power(x, (y - 1));            /* this return will recursively allow for this program to calculate the power of a number */
}
