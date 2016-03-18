char *nconcat_strings(char *dest, const char *src, int n){

  int i, j;
  int count = 0;

  for(i = 0; dest[i] !='\0'; i++){
    count++;
  }
  for(i = count, j = 0; src[j] !='\0' && j < n; i++, j++){
    dest[i] = '\0';
    dest[i] = src[j];
}
return dest;
}
