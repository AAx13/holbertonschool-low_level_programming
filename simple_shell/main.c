#include <unistd.h>
#include <sys/types.h>

int main(__attribute__((unused)) int ac, char **av, char **env)
{
  pid_t pid;
  char *exec_argv[] = {"/bin/echo", av[1], NULL};
  int status;

  if((pid = fork()) == -1)
  {
    perror("fork");
    return 1;
  }
  if(pid == 0)
  {
    execve(exec_argv[0], exec_argv, env);
  }
  else
  {
    wait(&status);
    printf("Child process ended \n");
  }
  return 0;
}
