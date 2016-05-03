#include <stdio.h>

int string_length(char *s)
{
  int i;

  i = 0;
  while(s[i] != '\0')
  {
    i++;
  }
  return i;
}

char *string_concat(char *s1, char *s2)   /* this function concatenates two strings */
{
  int i, j;

  j = 0;
  i = string_length(s1);
  while(s2[j] != '\0')
  {
    s1[i] = s2[j];
    i++;
    j++;
  }
  s1[i] = '\0';
  return s1;
}
