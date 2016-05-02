#include <stdlib.h>

int str_length(char *s)
{
  int i;

  i = 0;
  while(s[i] != '\0')
  {
    i++;
  }
  return i;
}

char *all_in_one_args(int ac, char **av)
{
  int i, j, len;
  char **x;
  char *y;

  i = 0;
  j = 0;
  x = malloc(ac * sizeof(char));
  while(av[i] != '\0')
  {
    len = str_length(*av[i][j]);
    y = malloc(len * sizeof(char));
    while(av[i][j] != '\0')
    {
      y[j] = av[i][j];
      j++;
    }
    j = 0;
    x[i] = av[i];
    i++;
  }
  return *x;
}
