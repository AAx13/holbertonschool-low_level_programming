/* this program will copy contents of a file and add it to another */
#include <sys/types.h>
#include <sys/uio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#define BUFSIZE 512

int main(int ac, char **av, __attribute__((unused))char **env)
{
  int n;
  int fd_in, fd_out;
  int buf[BUFSIZE];

  if(ac != 3)
  {
    perror("Argument");
    return (1);
  }
  fd_in = open(av[1], O_RDONLY);
  fd_out = open(av[2], O_CREAT | O_RDWR, 0655);


  while((n = read(fd_in, buf, BUFSIZE)) > 0)
  {
    write(fd_out, buf, n);
  }

  close(fd_in);
  close(fd_out);
  return 0;
}
