int str_len(char *str);


int str_len(char *str){  /* this function takes the length of a string and returns it */

  int len = 0;

  while(*str != 0){
    str++;
    len++;
  }
  return len;
}

void reverse_string(char *s){  /* this function reverses the string by taking the first character in the string and replacing it with the first */
                               
  int first, last, temp;
  int len = str_len(s);

  first = 0;
  last = len - 1;

  while (first < last){
    temp = s[first];
    s[first] = s[last];
    s[last] = temp;

    first++;
    last--;
  }
}
