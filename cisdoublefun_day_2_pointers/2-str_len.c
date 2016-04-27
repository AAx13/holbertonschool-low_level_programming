
int str_len(char *str)
{
  int i;

  i = 0;
  while(str[i] != '\0')   /* iterate through the string */
  {
    i++;                /* adds 1 to i */
  }
  return i;           /* returns i as being the total of characters or the length of a string */
}
