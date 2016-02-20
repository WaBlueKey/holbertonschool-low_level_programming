#include "my_functions.h"

/* this program prints the characters without the standard library. It uses print_char. */

void print_number(int n){

  int newn=n;
  int power=10;
  int printnum;

  if (n == 0){
    print_char('0');
  }

  if (n < 0){
    n = n * -1;
    print_char('-');
  }
  newn = n;

  while (newn > 9){
    newn = (newn / 10);
    power = power * 10;
  }

  power = power / 10;
  newn = n;

  while (newn > 0){
    printnum = newn / power;
    newn = newn % power;
    power = power / 10;
    print_char(printnum + '0');
  }
}

