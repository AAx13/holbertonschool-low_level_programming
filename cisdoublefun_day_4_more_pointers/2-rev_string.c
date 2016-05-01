
char *rev_string(char *s)  /* this function will reverse the string provided from main */
{
  int i, j;
  int temp;

  i = 0, j = 0;
  while(s[i] != '\0')   /* this loop will get the length of the string */
  {
    i++;
  }

  i -= 1;
  while(j < i)        /* this loop stores the string backwards into *s */
  {
    temp = s[j];
    s[j] = s[i];
    s[i] = temp;
    i--;
    j++;
  }
  return s;
}
