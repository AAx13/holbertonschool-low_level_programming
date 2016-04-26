int print_char(char c);
void print_tebahpla(void)
{
  int i;

  i = 122;            /* initialize i with the ascii value of 'z' */

  while(i > 96)         /* as long as i is bigger than the ascii value of 'a' - 1 */
  {
    print_char(i);    /* print_char i and iterate downard */
    i--;
  }

}
