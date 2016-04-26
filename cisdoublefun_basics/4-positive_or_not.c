int print_char(char c);
void positive_or_not(int n)
{
  if(n == 0)          /* if the number is 0 print Z */
  {
    print_char('Z');
  }
  else if(n > 0)      /* if the number is larger than 0 print P */
  {
    print_char('P');
  }
  else if(n < 0)      /* if the number is less than 0 print N */
  {
    print_char('N');
  }
}
