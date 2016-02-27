#include "my_functions.h"
/* function that prints (on one line) all possible combinations of 1-digit numbers. */

void print_combination_1(void) {
  int n = 0;

  while (n < 9) { 
    print_char(n + '0');
    print_char(44);
    n++;
  }
  print_char(57);
}
