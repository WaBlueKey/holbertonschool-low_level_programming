/* this function returns O if a number is odd otherwise 'E'. */
#include "my_functions.h"

char odd(int n) {

  if (n & 1) { /* Bitwise operator signifying the last bit if it is 1 then n is
                  odd.*/
    print_char('O');
  } else {
    print_char('E');
  }
  return 0;
}
