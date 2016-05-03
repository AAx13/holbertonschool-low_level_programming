#include <unistd.h>
int string_length(char *str);

int print_char(char c)
{
  return (write(1, &c, 1));
}

int main(int argc, char **argv)   /* this function will print all arguments received starting with the last one */
{
  int i, j;

  i = argc - 1;
  j = 0;
  while(argv[i] >= argv[0])
  {
    while(argv[i][j] != '\0')
    {
      print_char(argv[i][j]);
      j++;
    }
    j = 0;
    print_char('\n');
    i--;
  }
  return 0;
}
