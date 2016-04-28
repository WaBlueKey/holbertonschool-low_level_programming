/* this function swaps the values of two integers.*/
#include "my_functions.h"

void swap_int(int *a, int *b) {

  int sub;
  int *s;

  s = &sub; 

  *s = *a;
  *a = *b;
  *b = *s;
}
