int print_char(char c);

void print_string_2(char *str){

  int i = 0;
  
  while (*str != 0) {    /* starting at the 0 this function will skip every other character and print them */
    if (i % 2 == 0) {
      print_char(*str);
    }
    str++;
    
  }
}


