
#include "libshell.h"
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <string.h>
void print_string(char*);
char *read_line(const int fd);
char **string_split(const char *str, char separator);
int arg_exec(char **av, char **env);
void print_env(char **env);

void print_char(char c)
{
  write(1, &c, 1);
}

int main(__attribute__((unused))int ac,__attribute__((unused))char **av,__attribute__((unused)) char **env)
{

  int status = 1;
  char *line;
  char **args;

print_string("\t   --ver 0.0.1 Jan 2016 batch Holberton School--\n");
print_string("\n 'Your pain is the breaking of the shell that encloses your understanding..'-Kahlil Gibran\n\n");


  print_string("SHELL$ ");

  while(status) {
    line = read_line(0);  /* this function will read from user input and return a line to be split later */
    if(line == NULL) {
      print_string("read_line: Error\n");
      free(line);
      return 1;
    }
    args = string_split(line, ' ');  /* this function will split the entered line into an array of strings */
    if(args == NULL) {
      print_string("string_split: Error\n");
      return 1;
    }
    if(strcmp(args[0], "env") == 0) {  /* print environment */
      print_env(env);
    }
    status = arg_exec(args, env);
    if(status == 0) {
      free(line);
    }
  }
  return status;
}
