#include <unistd.h>

void print_char(char c) {
  write(1, &c, 1);
}

void prompt(void) {

  int i;
  char prompt[] = "Damian$ ";

  for(i = 0; prompt[i] != '\0'; i++) {
    print_char(prompt[i]);
  }
}
