char *string_ncopy(char *dest, const char *src, int n){

int i, j;

for(i = 0, j = 0; src[j] !='\0' && j == n; i++, j++){
  dest[i] = src[j];
}
  dest[i] = '\0';
  return dest;
}
