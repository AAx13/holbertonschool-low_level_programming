int loop(int n, int x){   /* this function calculates the square root of a number
                          and returns it */
    if(x * x == n){
      return x;
    } else if(n < 0 || x * x > n){
      return -1;
    }
    return loop(n, (x + 1));
}

int square_root(int n){
  return loop(n, 0);
}
