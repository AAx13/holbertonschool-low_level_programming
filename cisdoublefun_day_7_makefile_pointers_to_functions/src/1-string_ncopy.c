char *string_ncopy(char *dest, const char *src, int n) /* this function will copy a string into another pointer (or work just like strcpy) */
{
  int i;

  i = 0;
  while(src[i] != src[n])
    {
      dest[i] = src[i];
      i++;
    }
  return dest;
}
