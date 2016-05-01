char *string_copy(char *dest, const char *src) /* this program copies a string */
{
  int i, j;

  i = 0, j = 0;
  while(src[i] != '\0')        /* while the string has not reached the null terminator */
  {
    dest[j] = src[i];         /* throw the string, character-by-character into the *dest pointer */
    i++;
    j++;
  }
  return dest;
}
