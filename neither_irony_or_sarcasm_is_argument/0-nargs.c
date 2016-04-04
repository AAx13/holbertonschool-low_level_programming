#include <stdio.h>
int main(int argc, char **argv){

  argc -= 1;
  argv[0] -= 0;
  printf("%d\n", argc);
  return 0;

}
