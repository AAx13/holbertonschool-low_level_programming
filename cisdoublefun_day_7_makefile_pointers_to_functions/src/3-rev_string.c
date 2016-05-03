int print_char(char c);

int strLen(char *str)    /* this function gets the length of the string */
{
  int i;

  i = 0;
  while(str[i] != '\0')
  {
    i++;
  }
  return i;
}

char *rev_string(char *str)   /* this function will reverse the string and return it */
{
  int i, x;
  char temp;

  i = strLen(str) - 1;
  x = 0;
  while(x < i)
  {
    temp = str[x];
    str[x] = str[i];
    str[i] = temp;
    x++;
    i--;
  }
  return str;
}
