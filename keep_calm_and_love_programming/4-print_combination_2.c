#include <stdio.h>
#include "my_functions.h"

void print_combination_2(void) {

  int n1;
  int n2;

  for(n1 = 0; n1 < 10; n1++) {
  
    for(n2 = n1 + 1; n2 < 10; n2++) {
      printf("%d", n1);
      printf("%d", n2);
      
      if(n1 < 8) {
	printf(", ");
      }
    }
  }
}
