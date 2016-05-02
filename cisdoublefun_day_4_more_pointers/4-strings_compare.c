#include <string.h>

int strings_compare(char *s1, const char *s2)
{
  int i;

  i = 0;
  while(s1[i] == s2[i] && s1[i] != '\0')
  {
    if(s1[i] < s2[i])
    {
      s1[i] -= s2[i];
    }
    i++;
  }
  return 0;
}
