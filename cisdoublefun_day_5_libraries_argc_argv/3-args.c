#include <unistd.h>

int print_char(char c)
{
  return (write(1, &c, 1));
}

int main(int argc, char **argv)   /* this function will print all arguments received */
{
  int i, j;

  i = 0, j = 0;
  while(i < argc)
  {
    while(argv[i][j] != '\0')
    {
      print_char(argv[i][j]);
      j++;
    }
    j = 0;
    print_char('\n');
    i++;
  }
  return 0;
}
