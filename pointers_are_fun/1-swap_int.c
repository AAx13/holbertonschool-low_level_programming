void swap_int(int *a, int *b){

  int c;

  c = *a;  /* this function takes a new variable and stores a dereferenced value */
  *a = *b;  /* then stores the value from a dereferenced pointer into itself */
  *b = c;  /* and finally stores the value stored in the new variable into the opposite dereferenced variable thus swapping both dereferenced pointer values with eachother */ 
  
}
