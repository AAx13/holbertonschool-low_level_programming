/* this program prints permissions of a file */
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <stdio.h>
#define STAT av[1]

void print_char(char c)
{
  write(1, &c, 1);
}

int main(int ac, char **av)
{
  struct stat filestat;

  if(ac != 2)
  {
    perror("Args");
    return 1;
  }

  if(lstat(STAT, &filestat) == -1)
  {
    perror("stat");
    return (1);
  }

  if(S_ISDIR(filestat.st_mode))
  {
    print_char('d');
  }
  else
  {
    print_char('-');
  }

  if(filestat.st_mode & S_IRUSR)
  {
    print_char('r');
  }
  else
  {
    print_char('-');
  }
  if(filestat.st_mode & S_IWUSR)
  {
    print_char('w');
  }
  else
  {
    print_char('-');
  }
  if(filestat.st_mode & S_IXUSR)
  {
    print_char('x');
  }
  else
  {
    print_char('-');
  }
  if(filestat.st_mode & S_IRGRP)
  {
    print_char('r');
  }
  else
  {
    print_char('-');
  }
  if(filestat.st_mode & S_IWGRP)
  {
    print_char('w');
  }
  else
  {
    print_char('-');
  }
  if(filestat.st_mode & S_IXGRP)
  {
    print_char('x');
  }
  else
  {
    print_char('-');
  }
  if(filestat.st_mode & S_IROTH)
  {
    print_char('r');
  }
  else
  {
    print_char('-');
  }
  if(filestat.st_mode & S_IWOTH)
  {
    print_char('w');
  }
  else
  {
    print_char('-');
  }
  if(filestat.st_mode & S_IXOTH)
  {
    print_char('x');
  }
  else
  {
    print_char('-');
  }

  print_char('\n');

  return 0;

}
