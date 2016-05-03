
int factorial(int n)   /* this function will calculate the factorial of a number */
{
  if(n > 16)          /* if the factorial is higher than INT_MAX return -1 */
  {
    return -1;
  } else if(n < 0)
  {
    return -1;
  } else if(n == 0)
  {
    return 1;
  }
  return n * factorial(n - 1);      /* return the value of the expression n multiplied by value of expression (n - 1) */
}                                   /* passed as arguments to itself as a function */
