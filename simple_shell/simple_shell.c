
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
void print_env(int status, char **env);
int string_compare(char *s1, char *s2);



void print_char(char c)
{
  write(1, &c, 1);
}

int main(__attribute__((unused))int ac,__attribute__((unused))char **av,__attribute__((unused)) char **env)
{

  int i;
  int status = 1;
  char *line;
  char **args;

  print_char('\n');
  print_char('\n');
  print_char('\n');
  print_char('\n');
  print_string("\t\t   --ver 0.0.1 Jan 2016 batch Holberton School--\n");
  print_string("\n 'Your pain is the breaking of the shell that encloses your understanding..'-Kahlil Gibran\n\n");


  print_string("SHELL$ ");

  while(status) {
    line = read_line(0);  /* this function will read from user input and return a line to be split later */
    if(line == NULL) {
      print_string("read_line: Error\n");
      return 1;
    }
    args = string_split(line, ' ');  /* this function will split the entered line into an array of strings */
    free(line);
    if(args == NULL) {
      print_string("string_split: Error\n");
      return 1;
    }

    for(i = 0; args[i] != '\0'; i++) {    /* "command not found" if string doesnt match any command */
      print_string(args[i]);
    }
    print_string(": command not found\n");
    print_string("SHELL$ ");
    
    if(string_compare(args[0], "exit") == 0) {
      free(args);
      exit(0);
    }

    if(string_compare(args[0], "env") == 0) { /* this will print all environment variables */
      print_env(status, env);
      print_string("SHELL$ ");
    }
  }
  free(args);
  return status;
}
