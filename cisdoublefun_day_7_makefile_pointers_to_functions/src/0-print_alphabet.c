int print_char(char c);         /* added print_char prototype for print_char function use */
void print_alphabet(void)
{
  int i;              /* declaring variable i which we'll use as to iterate through the alphabet */

  i = 97;           /* making variable i 97 would make its ascii character value 'a' */

  while(i < 123)    /* as long as i is less than the ascii value of 'z' + 1 */
  {
      print_char(i);   /* print that character and iterate up one */
      i++;
  }

}
