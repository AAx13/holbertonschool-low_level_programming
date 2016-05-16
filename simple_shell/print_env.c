#include <unistd.h>
void print_string(char *str);
void print_char(char c);


void print_env(char **env)
{
  int i;

  for(i = 0; env[i] != '\0'; i++) {
    print_string(env[i]);
    print_char('\n');
  }
}
