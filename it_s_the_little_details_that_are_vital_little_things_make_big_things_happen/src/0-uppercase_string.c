char *uppercase_string(char *p){

  int i;

  for(i = 0; *(p + i) != '\0'; i++){
    if(*(p + i) >= 'a' && *(p + i) <= 'z'){
      *(p + i) -= 32;
    }
  }
  return(p);
}

/* This function takes the pointer to a string iterates through each character
to ensure that character is uppercase and returns */
