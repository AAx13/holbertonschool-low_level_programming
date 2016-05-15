
#include "libshell.h"
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/wait.h>
void print_string(char*);
char *read_line(const int fd);
char **string_split(const char *str, char separator);
int arg_exec(char **av, char **env);



int main(__attribute__((unused))int ac, __attribute__((unused))char **av,__attribute__((unused)) char **env) {

  int status = 1;
  char *line;
  char **args;

print_string(" ██ ▄█▀ ▒█████   ███▄    █   █████▒██▓     ██▓ ▄████▄  ▄▄▄█████▓\n");
print_string(" ██▄█▒ ▒██▒  ██▒ ██ ▀█   █ ▓██   ▒▓██▒    ▓██▒▒██▀ ▀█  ▓  ██▒ ▓▒\n");
print_string("▓███▄░ ▒██░  ██▒▓██  ▀█ ██▒▒████ ░▒██░    ▒██▒▒▓█    ▄ ▒ ▓██░ ▒░\n");
print_string("▓██ █▄ ▒██   ██░▓██▒  ▐▌██▒░▓█▒  ░▒██░    ░██░▒▓▓▄ ▄██▒░ ▓██▓ ░ \n");
print_string("▒██▒ █▄░ ████▓▒░▒██░   ▓██░░▒█░   ░██████▒░██░▒ ▓███▀ ░  ▒██▒ ░ \n");
print_string("▒ ▒▒ ▓▒░ ▒░▒░▒░ ░ ▒░   ▒ ▒  ▒ ░   ░ ▒░▓  ░░▓  ░ ░▒ ▒  ░  ▒ ░░   \n");
print_string("░ ░▒ ▒░  ░ ▒ ▒░ ░ ░░   ░ ▒░ ░     ░ ░ ▒  ░ ▒ ░  ░  ▒       ░    \n");
print_string("░ ░░ ░ ░ ░ ░ ▒     ░   ░ ░  ░ ░     ░ ░    ▒ ░░          ░      \n");
print_string("░  ░       ░ ░           ░            ░  ░ ░  ░ ░               \n");
print_string("                                              ░                 \n");

  print_string("Damian$ ");

  while(status) {
    line = read_line(0);
    if(line == NULL) {
      print_string("read_line: Error\n");
      free(line);
      return 1;
    }
    args = string_split(line, ' ');
    if(args == NULL) {
      print_string("string_split: Error\n");
      return 1;
    }
    status = arg_exec(args, env);
    if(status == 0) {
      free(line);
      free(args);
    }
  }
  return status;
}
