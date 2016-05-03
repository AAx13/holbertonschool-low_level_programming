#include <stdio.h>
#include <limits.h>

int string_to_integer(char *s)
{

  int i;
  int sign;
  long int number;
  int newDigit;

  i = 0;
  sign = 1;
  number = 0;
  while(s[i] != '\0' && (s[i] < '0' || s[i] > '9'))    /* while the string is not ended and does not contain a number */
  {
    if(s[i] == '-')
    {
      sign *= -1;
    }
    i++;
  }
  while(s[i] != '\0' && (s[i] >= '0' && s[i] < '9'))   /* while the string is not ended and contains a number */
  {
    number *= 10;                         /* 10 * the value of current number */
    newDigit = s[i] - '0';                /* turn s[i] into an integer */
    number += newDigit;                   /* number + new digit which is the number recently turned into an integer */
    if((sign == 1 && number > INT_MAX) || (sign == -1 && (-1 * number < INT_MIN)))
    {
      return 0;
    }
    i++;
  }
  return (sign * number);           /* number multiplied by negative or positive */
}
