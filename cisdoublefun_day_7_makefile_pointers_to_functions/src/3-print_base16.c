int print_char(char c);
void print_base16(void)
{
  int i;

  i = 0;

  while(i < 16)     /* while i is less than 16 (0-9A-F) */
  {
    if(i < 10)      /* if i is less than 10 (0-9) */
    {
      print_char(i + '0');  /* print i after converting to character */
      i++;
    }
    else
    {
      print_char(i + '7');  /* otherwise print the character of i + 7 and iterate i up once */
      i++;
    }
  }


}
