
char *lowercase_string(char *str)  /* this function will reduce all uppercase letters in a string to lowercase */
{
  int i;

  i = 0;
  while(str[i] != '\0')
  {
    if(str[i] > 64 && str[i] < 91)
    {
      str[i] += 32;
    }
    i++;
  }
  return str;
}
