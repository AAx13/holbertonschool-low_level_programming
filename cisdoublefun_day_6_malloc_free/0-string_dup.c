#include <stdlib.h>

int str_length(char *str)    /* this function gets the length of the string */
{
  int i;

  i = 0;
  while(str[i] != '\0')
  {
    i++;
  }
  return i;
}

char *string_dup(char *str)  /* this function will take a string and store it into newly allocated memory */
{
	int i, j;
  char *x;

  i = 0;
  j = str_length(str);
  x = malloc(sizeof(char) * j);

  if(x == NULL)
  {
    return NULL;
  }
  while(str[i] != '\0')
  {
    x[i] = str[i];
    i++;
  }
  return x;
}
