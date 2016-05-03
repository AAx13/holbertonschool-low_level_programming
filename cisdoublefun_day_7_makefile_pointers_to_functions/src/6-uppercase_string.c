
char *uppercase_string(char *str)  /* this function iterates through a string changes the case to uppercase if it is not */
{
  int i;

  i = 0;
  while(str[i] != '\0')
  {
    if(str[i] > 96 && str[i] < 123)
    {
      str[i] -= 32;
    }
    i++;
  }
  return str;
}
