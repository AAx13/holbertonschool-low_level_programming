char *cap_string(char *str)   /* this function will change certain lowercase characters to uppercase within a string */
{
  int i;

  i = 0;
  while(str[i] != '\0')   /* while we're not at the end of the string */
  {
    if(str[i] > 96 && str[i] < 123)  /* check for uppercase letter */
    {
      if(str[i - 1] == ' ' || str[i - 1] == '\n' || str[i - 1] == '\t') /* if the previous position is a ' ', new line or tab */
      {
        str[i] -= 32;             /* change the letter to lower case */
      }
    }
    i++;
  }
  return str;
}
