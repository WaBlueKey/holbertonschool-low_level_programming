/* this function prints all the numbers of base 16, from 0 to F. */

#include "my_functions.h"

void print_base16(void) {
  int i = 0;
  int j = 65;

  while (i < 10) {
    print_char(i + '0');
    ++i;
    }
  while (j < 71) {
    print_char(j);
    ++j;
  }

}
