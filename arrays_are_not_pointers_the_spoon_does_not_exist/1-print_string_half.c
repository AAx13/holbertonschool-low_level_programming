int print_char(char c);

int str_len(char *str){  /* this function counts the length of the string */

  int len = 0;
  
  while(*str != 0){
    str++;
    len++;
  }
  return len;
}


void print_string_half(char *str){  /* this function will call the length of the string function and divide it by two to start at the middle of the string */

  int len;                       
  len = str_len(str);
  len = len + 1;                 /* by adding 1 to the length we guarantee once the string has been divided in half that it will continue to accept the correct half of the */
  str = str + len /2;             /*  string and iterate through while printing */
  
  while(*str != 0){
    print_char(*str);          /* the while loop iterates through the half of the string and prints till null value */
    str++;
  }
}


