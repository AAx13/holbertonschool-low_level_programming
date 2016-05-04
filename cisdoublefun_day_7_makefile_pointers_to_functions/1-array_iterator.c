
void array_iterator(int *array, int n, void (*ptr_action)(int)) /* this is a function that executes another function */
{                                                               /* given as a parameter on each element of an array. */
  int i;

  i = 0;
  while(i < n)
  {
    ptr_action(array[i]);
    i++;
  }
}
