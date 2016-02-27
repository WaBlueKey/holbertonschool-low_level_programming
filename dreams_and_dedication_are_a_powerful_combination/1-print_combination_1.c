#include "my_functions.h"

void print_combination_1(void) {
  int n = 0;

  while (n < 9) {
    print_char(n + '0');
    print_char(44);
    n++;
  }
  print_char(57);
}
