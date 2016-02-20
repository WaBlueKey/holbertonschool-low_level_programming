#include "my_functions.h"

/* this programs prints the last digit of an input number. */
void print_last_digit(int n) {
  
  if(n < 0) {  /* We have to change negative numbers to positive when we print the last digit.*/
    n = n * -1;
  }
  if(n > 9){ /* numbers under 10 have a single digit so we set the min to greater than 9. */
    n = n % 10;  /* we use modulo to get the remainder when I divide by 10. */
  }
  print_char(n + '0'); /* added it to '0' to set the proper value and not the ascii equivalent. */
}
