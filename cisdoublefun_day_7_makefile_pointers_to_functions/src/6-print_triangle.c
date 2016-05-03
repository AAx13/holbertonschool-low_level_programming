int print_char(char c);

int print_base(int n)
{
  /*first I will write a function to take the height (n) and display an (n) amount of returns */
  int i;

  i = 0;
  while(i < n)
  {
    print_char('*');
    i++;
  }
  return 0;
}

void print_triangle(int n)
{
  int i;
  int x;

  i = 1;
  x = 0;

  while(x < n)
  {
    while(i < n)   /* writing a loop to iterate and print through the triangle */
    {
      print_base(n);
      i++;
    }
    x++;
  }
  return;
}
