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

char *string_concat(char *s1, char *s2)
{
  int j, i;

  i = 0;
  j = string_length(s1);
  while()
  {
    s1[j] = s2[i];
    i++;
    j++;
    printf("%s\n", s2);
  }
  return s1;
}
