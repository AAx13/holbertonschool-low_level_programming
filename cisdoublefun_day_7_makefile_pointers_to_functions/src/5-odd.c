
char odd(int n)
{
  if(n & 1)         /* if (any number) and 1 is true return 'O' signifying it is odd */
  {
    return 'O';   /* the way this is done is if any number within its binary has a 1 in the lowest spot, it is odd */
  }
  else
  {
    return 'E';
  }
}
