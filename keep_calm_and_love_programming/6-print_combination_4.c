#include "my_functions.h"
/* this function prints - on one line - all possible combinations of two two-digit numbers. */

void print_combination_4(void) {

  int n1;
  int n2;
  int n3;
  int n4;

  for(n1 = 0; n1 < 10; n1++) {
    for(n2 = 0; n2 < 10; n2++) {
      for(n3 = 0; n3 < 10; n3++) {
	for(n4 = n2 + 1; n4 < 10; n4++){
	  print_char(n1 + '0');
	  print_char(n2 + '0');
	  print_char(' ');
	  print_char(n3 + '0');
	  print_char(n4 + '0');
	  print_char(',');
          print_char(' ');
	}
      }
    }
  }
}
