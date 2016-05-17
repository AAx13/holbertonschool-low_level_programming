
int string_compare(char *s1, char *s2) /* this function will compare two strings */
{
  int i;
  char x, k;

  while(s1[i] != '\0') {
    if(s1[i] == s2[i]) {
      if(s1[++i] == '\0') {
        return 0;
      }
      i++;
    } else if(s1[i] != s2[i]) {
      x = s1[i];
      k = s2[i];
      x -= k;
      return x;
    }
  }
  return 0;
}
