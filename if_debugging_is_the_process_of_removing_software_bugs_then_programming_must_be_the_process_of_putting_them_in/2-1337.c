char *leet(char *p){

  int i;

  for(i = 0; *(p + i) != '\0'; i++){
    if(*(p + i) == 'a' || *(p + i) == 'A'){
      *(p + i) = '4';
    }
    if(*(p + i) == 'e' || *(p + i) == 'E'){
      *(p + i) = '3';
    }
    if(*(p + i) == 'o' || *(p + i) == 'O'){
      *(p + i) = '0';
    }
    if(*(p + i) == 't' || *(p + i) == 'T'){
      *(p + i) = '7';
    }
    if(*(p + i) == 'l' || *(p + i) == 'L'){
      *(p + i) = '1';
    }
  }
  return(p);
}

/* this function will itterate through a string and encode the string in leet
speak (change certain characters to numbers that match its look) */
