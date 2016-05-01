int string_digit(char *s)  /* function that checks if a string contains only digits. */
{
  int i;

  i = 0;
  if(s[i] == '\0')
  {
    return 0;
  }
  while(s[i] != '\0')
  {
    if(!(s[i] >= '0' && s[i] <= '9') && (s[i] != ' '))
    {
      return 0;
    }
    i++;
  }
  return 1;
}
