int print_char(char c);

void print_number(int n)
{
  int power, ncopy;

  power = 10;
  ncopy = n;
  while(n <= 9 || n > 0)
  {
    ncopy /= 10;
    power *= 10;
  }

  print_char(n);
}
