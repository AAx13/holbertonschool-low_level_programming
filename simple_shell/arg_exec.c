#include <unistd.h>
#define BUFSIZE 1024


int arg_exec(char **av, char **env) {

  pid_t pid;
  int i, j;

  if(av[0] == NULL) {
    return 0;
  }

  if((pid == fork()) == -1) {
    perror("fork");
    return 0;
  }

  execve("/bin/ls", av, env);
  /* string compare? */
  /* string ncmp? */


  return 1;
}
