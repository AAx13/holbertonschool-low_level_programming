#include <unistd.h>
void print_number(int n);

/* this function will write to stdout a single character */
int print_char(char c)
{
        return write(1, &c, 1);
}

/* this function will print the array */
void print_array(int *array, int x)
{
        int i;
        for(i = 0; i < x; i++) {
                print_number(array[i]);
                if(i != x - 1) {
                        print_char(',');
                        print_char(' ');
                }
        }
        print_char('\n');
}

/* this function will print number */
void print_number(int n)
{

        int ncopy=n;
        int power=10;
        int print;

        if (n < 0){
                n= n * -1;
                print_char('-');
        }

        ncopy = n;

        while (ncopy > 9){
                ncopy=(ncopy / 10);
                power= power * 10;
        }

        power = power / 10;
        ncopy = n;

        while (ncopy > 0){
                print= ncopy / power;
                ncopy= ncopy % power;
                power= power / 10;
                print_char(print + '0');
        }

        if (n == 0){
                print_char('0');
        }
}
