#include "list.h"
#include <stdlib.h>
int str_length(char *str);
int print_char(char c);

void print_list(List *list)   /* this function will print the contents of a list */
{
  List *newNode;
  int i;
  char *newString;

  for(newNode = list; newNode != NULL; newNode = newNode->next)  /* this loop iterates through the nodes in the list */
  {
    newString = malloc(str_length(newNode->str));   /* allocate enough space to store each new string */
    for(i = 0; newNode->str[i] != '\0'; i++)    /* iterate through that string one by one */
    {
      newString[i] = newNode->str[i];     /* transfer character by character into new string */
      print_char(newString[i]);           /* print each character as it was being stored */
    }

    if(newNode->next == NULL)   /* if the next node is null print a new line */
    {
      print_char('\n');
    }
    if(newNode->next != NULL)
    {
      print_char(',');
      print_char(' ');
    }
  }
}
