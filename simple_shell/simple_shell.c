
#include "libshell.h"
#include <stdlib.h>
void prompt(void);
char *read_line(const int fd);
char **string_split(const char *str, char separator);
int arg_exec(char **av, char **env);



int main(int ac, char **av, char **env) {

  int fd_in;
  int status = 1;
  char *line;
  char **args;

  prompt();

  while(status) {
    line = read_line(0);
    args = string_split(line, ' ');
    status = arg_exec(args, env);

    free(line);
    free(args);
    prompt();
  }
  return status;
}
