#include <stdlib.h>
#include <stdio.h>
#include "list.h"
int str_length(char *str);


List *params_to_list(int ac, char **av) /* This function creates a new list from command line arguments */
{
  List *node1;
  int i, j, len;

  node1 = malloc(sizeof(List));

  for(i = 0; i < ac; i++)         /* this loop will allocate memory for a new string and store command line argument within it */
  {
    len = str_length(av[i]);
    node1->str = malloc(sizeof(char) * (len - 1));
    j = 0;
    while(av[i][j] != '\0')
    {
      node1->str[j] = av[i][j];
      j++;
    }
    node1->str[j] = '\0';
  }
  return node1;
}

int str_length(char *str)
{
  int i;
  for(i = 0; str[i] != '\0'; i++);
  return i;
}
