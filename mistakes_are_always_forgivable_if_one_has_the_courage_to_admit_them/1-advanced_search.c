int advanced_search(int *array, int size, int (*check_func)(int)){

  int false_return = -1;
  int x;

  for(x = 0; x < size; x++){              /* this function points to another function which checks to ensure the number given */
    if((*check_func)(array[x])){          /*  matches and prints the element number of the number found to match. Otherwise  */
      return x;                           /*    if a the cooresponding number is not found return -1 */
    }
  }
  return false_return;
}
