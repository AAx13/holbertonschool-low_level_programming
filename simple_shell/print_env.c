#include <unistd.h>
void print_string(char *str);
void print_char(char c);


int print_env(int status, char **env)  /* this function will print all environment variables */
{
  int i;

  for(i = 0; env[i] != '\0'; i++) {
    print_string(env[i]);
    print_char('\n');
  }
  return status;
}
