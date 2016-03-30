int square_root(int n){ /* this function will find the square root of a number
                        (if it has a natural square root) by declaring two new
  int x = n;            variables: int x while will store n, and int y which
  int y = 1;            will store 1 initially. */

  while(x > y){         /* while x is bigger than y, this loop will find the
    x = (x + y) /2;     square root by dividing the sum of x and y, by 2, and
    y = n / x;           returning x once x is no longer bigger than y.
  }

  if(n % y != 0){       /* this if statement will return a '-1' when the number
    return -1;          being input does not have a perfect square root */
  }

  return x;
}
