char *rot13(char *p){

  int i;

  for(i = 0; *(p + i) != '\0'; i++){
    if((*(p + i) >= 'a' && *(p + i) <= 'm') || (*(p + i) >= 'A' && *(p + i) <= 'M')){
      *(p + i) += 13;
    }
    else if((*(p + i) >= 'n' && *(p + i) <= 'z') || (*(p + i) >= 'N' && *(p + i) <= 'Z')){
      *(p + i) -= 13;
    }
  }
  return(p);
}

/* this function iterates through the string and rotates characters into rot13 */
