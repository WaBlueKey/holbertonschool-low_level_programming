#include "my_functions.h"
/* this function that prints (on one line) all possible combinations of 
   two two-digit numbers. */
void print_combination_4(void) {
  int n1, n2, n3, n4, g1, g2;
  for(n1 = 0; n1 < 10; n1++){
    for (n2 = 0; n2 < 10; n2++){
      for (n3 = 0; n3 < 10; n3++){
	for (n4 = 0; n4 < 10; n4++){
	  g1 = (n1 * 10) + n2;
	  g2 = (n3 * 10) + n4;
	  if(g1 < g2){
	    print_char(n1 + '0');
	    print_char(n2 + '0');
	    print_char(32);
	    print_char(n3 + '0');
	    print_char(n4 + '0');
	    if(g1 < 98){
	      print_char(44);
	      print_char(32);
	    }
	  }
	}
      }
    }
  }
}
