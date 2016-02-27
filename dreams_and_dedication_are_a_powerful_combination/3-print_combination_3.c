#include "my_functions.h"

void print_combination_3(void) {

  int n1;
  int n2;
  int n3;

  for (n1 = 0; n1 < 10; n1++) {
    for (n2 = n1 + 1; n2 < 10; n2++) {
      for (n3 = n2 + 1; n3 < 10; n3++) {
	print_char(n1 + '0');
	print_char(n2 + '0');
	print_char(n3 +'0');
	if (n1 < 7) {
	  print_char(',');
	  print_char(' ');
	}
      }
    }
  }
}
