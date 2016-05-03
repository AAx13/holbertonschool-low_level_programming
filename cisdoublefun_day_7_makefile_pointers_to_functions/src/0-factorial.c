
int factorial(int n)   /* this function will iteratively calculate the factorial of a number */
{
  int i;
  int x;
  int number;

  i = 1;
  x = 1;
  number = n;
  while(i < n)          /* this loop will ultimately store within the variable "number" the factorial of a number */
  {
    number *= (n - x);    /* storing within number the value of the expression (number * (n - x)) */
    i++;
    x++;
  }
  if(n < 0)
  {
    return -1;
  }
  if(n > 16)        
  {
    return -1;
  }
  return number;
}
