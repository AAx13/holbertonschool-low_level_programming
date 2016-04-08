
void array_iterator(int *array, int elem, void (*action_ptr)(int)){

  int i;                       /* this function passes a pointer to another function in order to iterate and print
                                  elements in an array */
  for(i = 0; i < elem; i++){
    (*action_ptr)(array[i]);   /* ------ */
  }
}
