
int string_to_integer(char *s)
{

  long int x = 0;
  int i = 0, y = 0;

  while(s[i] != '\0')   /* iterates through each character in the string */
  {
    if(s[i] == '-')    /* this statement counts the '-' */
    {
      y++;
    }
    if(s[i] > 47 && s[i] < 58)   /* if between 0 and 9 */
    {
      x = x * 10 + (s[i] - 48); /* turn into integer and store into x */
      if(s[i + 1] == ' ')    /* if the character after the current character is a space */
      {
        break;
      }
    }
    i++;
  }
  if(!(y % 2 == 0))     /* if the count of '-' is not even */
  {
    x *= -1;   /* make the integer negative */
  }
  if(x > 2147483647)  /* if x is bigger than INT_MAX */
  {
    x = 0;
  }
  return x;
}
