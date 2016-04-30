
int square_root(int n)  /* this function iteratively calculates the square root of a number */
{
  int y = 0;

  while(y < n)
  {
    if(y * y == n)
    {
      return y;
    }
    y++;
  }
  if(y < 0 || y * y > n)   /* if the number is not a perfect square root or its a negative return -1 */
  {
    return -1;
  }

  return y;
}
