int print_char(char c);

void print_string(char *str){  /* this function takes a pointer to a character and prints it */

  while (*str != 0){
    print_char(*str);
    str++;
  }
  
}
