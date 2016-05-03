#include <stdio.h>
int string_alpha(char *s);

int main()
{
  char s[] = "kdsjlfkjlkdj";
  int x;

  x = string_alpha(s);
  printf("%d\n", x);

  return 0;
}

int string_alpha(char *s)
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
