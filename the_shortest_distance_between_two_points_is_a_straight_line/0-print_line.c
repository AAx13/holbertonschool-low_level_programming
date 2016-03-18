int print_char(char c);

void print_line(int n){ /* this function draws a stright line in console */

  int i = n;          /* initialise variable i as equaling the called variable n */

  if(i <= 0){            /* check if the integer will be 0 and under, and print nothing */
      print_char('\n');
  } else {
    for(i = 0; i < n; i++)  /* otherwise print the number of lines that the called variable suggests */
      print_char('_');
      print_char('\n');
}
}
