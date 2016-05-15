#include <unistd.h>

void print_char(char c) {
  write(1, &c, 1);
}

void print_string(char *str) {

  int i;

  for(i = 0; str[i] != '\0'; i++) {
    print_char(str[i]);
  }
}
