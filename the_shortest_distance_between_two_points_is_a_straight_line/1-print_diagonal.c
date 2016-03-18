int print_char(char c);

void print_diagonal(int n){ /* this function draws diagonal lines in console */

  int i, k;

  if(n <= 0){             /* if the number given is 0 or less print return */
    print_char('\n');
  } else {
for(i = 0; i < n; i++){      /* otherwise this nested for loop will iterate and print */
  for(k = 0; k < i; k++){    /* spaces ending with a forward slash and a return based */
  print_char(' ');           /* on the number (or n) given. */
}
  print_char('\\');
  print_char('\n');
  }
}
}
