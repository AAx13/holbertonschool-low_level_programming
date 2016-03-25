int power(int x, int y){

  if(y > 0){
    return (x * power(x, y - 1));
  } else if(y == 0){
    return 1;
  } else {
    return -1;
  }
}

/* This function through recursion takes an integer and calculates it to the
power of integer y */
