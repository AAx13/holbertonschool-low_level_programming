#include <unistd.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/wait.h>
void print_string(char*);
void env_string(char **env);

int arg_exec(char **av, char **env) /* this function will execute an argument taken from user input and split into separate strings */
{

  pid_t pid;

  if((pid = fork()) == -1) {
    print_string("Fork: Error");
    return 1;
  }
  if(pid == 0) {
    execve(av[0], av, env);
  } else if(pid > 0) {
    return 1;
  }
  return 0;
}
