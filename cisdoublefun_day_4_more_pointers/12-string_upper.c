int string_upper(char *s)  /* function that checks if a string contains only upper-case alphabetical characters */
{
  int i;

  i = 0;
  if(s[i] == '\0')
  {
    return 0;
  }
  while(s[i] != '\0')
  {
    if(!(s[i] >= 'A' && s[i] <= 'Z') && (s[i] != ' '))
    {
      return 0;
    }
    i++;
  }
  return 1;
}
