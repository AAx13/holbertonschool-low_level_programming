int print_char(char c);

void print_string(char *str)
{
  int i;

  i = 0;
  while(str[i] != '\0')            /* iterate through the string until it reaches null value */
  {
    print_char(*(str + i));       /* print the value of the position i from the array */
    i++;                        /* add 1 to i */
  }
}
