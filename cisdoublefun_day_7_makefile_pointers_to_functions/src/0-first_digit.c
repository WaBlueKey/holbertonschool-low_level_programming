#include "../inc/my_functions.h"
#include <limits.h>

/* this function prints the first digit of a number. */
int first_digit(int n) {
 
  if (n == INT_MIN) {  /* this statement accommodates the special case of the min integer. */
      n = INT_MIN + 1;
    }
  if (n == 0) { 
      return(n);
    }
  if (n < 0) { /* for negative numbers, we want to make them positive by multiplying them by -1. */
      n = n * -1;
    }
  if (n > 0) { /* for all other possible numbers > 0, they are put through a while loop to get the first digit. */ 
    while (n > 9){
       n = (n / 10);
       }
    } 
    return(n); 
}
