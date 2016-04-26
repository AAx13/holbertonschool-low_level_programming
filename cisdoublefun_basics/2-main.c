int print_char(char c);

int main(void)
{
   int a[5] = { 0, 1, 2, 4, 1 };
   int b[5] = { 1, 6, 2, 2, 8 };
   int i;

   i = 4;
   while (i >= 0)               /* ensuring the loop will stop with zero */
   {
         a[i] += b[i];            /* add a[i] to b[i] */
         print_char(a[i] + '0');    /* turn a[i] into a character and print */
         i--;                     /* iterate down towards 0 */
   }
   print_char('\n');
   return (0);
}
