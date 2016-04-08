int loop(int n, int i){  /* this function returns 1 if the number is prime and 0 otherwise */

  if(i == 1){
    return 1;
  } if(n % i == 0){
    return 0;
  }
  return loop(n, i - 1);
}

int is_prime_number(int n){

  if(n < 2){
    return 0;
  }
  return loop(n, n - 1);
}
