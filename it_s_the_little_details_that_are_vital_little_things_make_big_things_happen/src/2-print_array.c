int print_char(char c);

void print_number(int n){

  int ncopy=n;
  int power=10;
  int print;

  while (ncopy > 9 || ncopy < -9){
    ncopy=(ncopy / 10);
    power= power * 10;
  }

  ncopy = n;
 
  if(ncopy < 0){
    print_char('-');
  }
 
  power = power / 10;
  
  if(n > 0){
    ncopy= n * -1;
  }
  
  while (ncopy < 0){
    print= ncopy / power;
    ncopy= ncopy % power;
    power= power / 10;
    print = print * -1;
    print_char(print + '0');
  }

  if (n == 0){
    print_char('0');
  }
}

  /* This function takes a given number and prints it */
  /* In order to do this consiering I did not use any of the standard libraries to acheive this, I had to figure out how to tell the computer two things. */
  /* 1. How to tell the computer what numbers needed to be printed by identifying each digit */
  /* 2. Identifying how many digits there are. */

  void print_array(int *a, int n){ /* This function will print each element in an array */

    int i;                         

    for(i = 1; i < n; i++){     /* after initializing "i" I will count that starting at one and iterate up through the amount of elements in the array */
      print_number(*a);         /* once checked for the condition less than the max number of elements in the array it will print */
      print_char(',');          /* the dereferenced value of the array which would be the next element in the array and immediately following this print comma and space */
      print_char(' ');
      a++;
    } if( i == n){              /* once i reachest the last element in the array it will print only the element as well as a return as specified */
      print_number(*a);         
      print_char('\n');
    }
  }


