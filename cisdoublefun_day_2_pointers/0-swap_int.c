
void swap_int(int *a, int *b)
{
  int i;

  i = *a;     /* store value of *a */
  *a = *b;    /* store value of *b into *a */
  *b = i;     /* store value from i into *b thus swapping values for both pointers */

}
