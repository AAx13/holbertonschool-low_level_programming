#include <stdio.h>
int main(int argc, char **argv){  /* this program will return the number of arguements input */

  argc -= 1;
  argv[0] -= 0;
  printf("%d\n", argc);
  return 0;

}
