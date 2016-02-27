#include "my_functions.h"

void print_combination_2(void) {
  int n1;
  int n2;

  for(n1 = 0; n1 < 10; n1++) {
  
    for(n2 = n1 + 1; n2 < 10; n2++) {
      print_char(n1 + '0');
      print_char(n2 + '0');
      if(n1 < 8) {
      print_char(',');
      print_char(' ');
      }
    }
  }
}
