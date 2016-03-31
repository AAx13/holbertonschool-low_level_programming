int is_prime_number(int n){

  int i;             /* this function will return a 1 if the number is prime number
                      and 0 otherwise */
  if(n <= 1){          
    return 0;
  }

  for(i = 2; i < n; i++){
    if(n % i == 0){
      return 0;
    }
  }
  return 1;
}
