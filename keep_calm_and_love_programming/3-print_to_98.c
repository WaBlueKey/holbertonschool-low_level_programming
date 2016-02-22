#include <stdio.h>
#include "my_functions.h"
/* this function takes an integer as argument, and prints - on one line - 
all numbers from its value to 98, followed by a new line. */
void print_to_98(int n) {

  while(n < 98) {
  printf("%d, ", n);
  n++;
  
  }
  while(n > 98) {
  printf("%d, ", n);
  n--;
  }
 
  printf("%d\n",n);
 
}


