#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
void print_char(char c);

int main(int ac, char *av[])  /* this function will open a file and write to the console the contents of the file */
{
  int i, fd;             /* declare int i as an iterator in the for loop and fd to hold the file descriptor value */
  char *buf;            /* declare char *buf to point to the newly allocated space that will hold the size necessary based on file contents */
  struct stat status;   /* declare struct stat for file stats */

  if(ac != 2)           /* if ac is not equal to two for if ac was more than two, we would have too many arguments */
  {
    return 1;
  }
  if(stat(av[1], &status) < 0)  /* if the content of the file is less than 0 */
  {
    return 1;
  }
  buf = malloc(status.st_size);  /* initiate the pointer buff to point to newly allocated memory the size of the file contents */
  if(buf == NULL)
  {
    return 1;
  }

  fd = open(av[1], O_RDONLY);    /* fd will store the file descriptor value of the first 2nd argument under the read only mode */

  read(fd, buf, status.st_size);    /* read fd to the allocated size of the content of the file */
  for(i = 0; i < status.st_size; i++)
  {
    print_char(buf[i]);   /* iterate through the file and print character by character the entire contents of the file */
  }
  close(fd);        /* close the file descriptor */
  free(buf);      /* free alocated memory at the buffer location */
  return 0;
}
