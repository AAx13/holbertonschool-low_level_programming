int string_printable(char *s)  /* function that checks if a string contains only printable characters (including space) */
{
  int i;

  i = 0;
  if(s[i] == '\0')
  {
    return 0;
  }
  while(s[i] != '\0')
  {
    if(!(s[i] >= 32 && s[i] <= 126) && (s[i] != ' '))
    {
      return 0;
    }
    i++;
  }
  return 1;
}
