int print_char(char c);

int print_top_row(int n)
{
  int i;

  for(i = 0; i < n; i++) {
    if(i == 0) {
      print_char(92);
    } else if (i == n - 1) {
      print_char(47);
    } else {
      print_char(' ');
    }
  }
  return 0;
}

int print_middle_row(int n)
{
  int i;

  for(i = 0; i < n; i++) {
    if(i == n / 2) {
      print_char('X');
    } else {
      print_char(' ');
    }
  }
  return 0;
}

int print_bottom_row(int n)
{
  int i;

  for(i = 0; i < n; i++) {
    if(i == 0) {
      print_char(47);
    } else if (i == n - 1) {
      print_char(92);
    } else {
      print_char(' ');
    }
  }
  return 0;
}
