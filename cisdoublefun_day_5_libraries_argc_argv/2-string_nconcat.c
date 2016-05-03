#include <stdio.h>
int string_length(char *str)
{
  int i;

  i = 0;
  while(str[i] != '\0')
  {
    i++;
  }
  return i;
}

char *string_nconcat(char *s1, char *s2, int n)  /* this function concatenates two strings. */
{
  int i, j;                                      /* the string will only concatenate up to another (n) bytes */

  j = 0;
  i = string_length(s1);
  while(s2[j] != '\0')
  {
    s1[i] = s2[j];
    i++;
    if(j == (n - 1))
    {
      return s1;
    }
    j++;
  }
  return s1;
}
