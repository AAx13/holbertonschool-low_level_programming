
int string_alpha(char *s)  /* function that checks if a string contains only alphabetical characters. */
{
  int i;

  i = 0;
  if(s[i] == '\0')
  {
    return 0;
  }
  while(s[i] != '\0')
  {
    if(!(s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z'))
    {
      return 0;
    }
    i++;
  }
  return 1;
}
