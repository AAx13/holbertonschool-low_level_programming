#include <stdio.h>
int string_length(char *s);

char *string_string(const char *haystack, const char *needle)
{
  int i, j;

  i = 0;
  j = string_length((char *)needle);
  while(haystack[i] != '\0')
  {
    if(!haystack)
    {
      return 0;
    }
    if(haystack[i] == needle[j])
    {
      haystack[i] = needle[j];
    }
    i++;
  }
  return haystack;
}

int string_length(char *s)   /* length of a string */
{
  int i;

  i = 0;
  while(s[i] != '\0')
  {
    i++;
  }
  return i;
}

int main()
{
  int x;
  const char big[] = "this is a haystack find the needle!";
  const char small[] = "needle";

  x = string_string(big, small);
  printf("found the [%s]\n", x);

  return 0;
}
