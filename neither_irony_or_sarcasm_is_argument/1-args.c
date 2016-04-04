#include <stdio.h>
int main(int argc, char **argv){ /* this program will print each and every argument */

  int i;

  for(i = 0; i < argc; i++){
    printf("%s\n", argv[i]);
  }
  return 0;

}
