int factorial(int n){

  if(n == 0){
    return 1;
  }

  if(n < 0){
    return -1;
  }

  return n * factorial(n - 1);

}

/* this function returns the factoral of a given number by use of recursion */
