int str_len(char *str){
  
  int len = 0;        /* this function iterates through a given string */
 
  while(*str != 0){   /* len counts through the iterations and is returned thus counting the length of a string */
    str++;
    len++;
  }
  
  return len;
  
}
