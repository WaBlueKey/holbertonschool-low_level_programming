/* this function prints the alphabet, in lowercase */
#include "my_functions.h"

void print_alphabet(void) {
  int i = 97; /* we start at 97 which is the ascii decimal value of a */

  while(i > 96 && i < 123) {
    print_char(i);
    ++i;
  }
}
