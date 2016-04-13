#include <stdlib.h>
#include <unistd.h>


int print_char(char c)
{
  return (write(1, &c, 1));
}

char *string_concat(char *first, char *second){

  char both[] = {&first, &second};

  both = malloc(sizeof(char *));

}
