int strings_compare(char *s1, const char *s2){

  /* this function will compare two given strings, if the first string is
  equal to the second string it will return 0, otherwise it will return a
  number based on the first letter in the first strings position in the
  alphabet(or ASCII table) to the first letter in the second strings position */

  return(*s1 - *s2);

}
