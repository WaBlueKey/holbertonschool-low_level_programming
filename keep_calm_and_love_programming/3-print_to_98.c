#include <stdio.h>
#include "my_functions.h"

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


