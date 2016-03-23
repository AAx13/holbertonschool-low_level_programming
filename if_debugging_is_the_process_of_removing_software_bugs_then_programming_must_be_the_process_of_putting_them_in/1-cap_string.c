char *cap_string(char *p){

  int i;

  for(i = 0; *(p + i) != '\0'; i++){
    if(i == 0){
      if(*(p + i) >= 'a' && *(p + i) <= 'z'){
        i++;
        *(p + i) -= 32;
      }
    }
    if(*(p + i) == '\n' || *(p + i) == '\t' || *(p + i) == ' '){
      if(*(p + i + 1) >= 'a' && *(p + i + 1) <= 'z'){
        i++;
      *(p + i) -= 32;
    }
  }
}
return(p);
}

/* this function will iterate through a string and only uppcase a character
that is 1: the first character in the string.
        2: a character following a space, tabulation, or a new line. */
