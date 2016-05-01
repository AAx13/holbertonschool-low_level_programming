int root_loops(int n, int x)   /* this function recursively computes the square root of a number */
{
  if(x * x == n)
  {
    return x;
  } else if(x < 0 || x * x > n)
  {
    return -1;
  }
  return root_loops(n, (x + 1));
}

int square_root(int n)   /* this function will call our recursive function adding to it an integer to iterate through */
{
  return root_loops(n, 0);
}
