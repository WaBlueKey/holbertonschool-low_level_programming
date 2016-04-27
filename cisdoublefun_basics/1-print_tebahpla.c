/* this function prints the alphabet in lower case and in reverse order. */
#include "my_functions.h"

void print_tebahpla(void) {

  int i = 122; /* i is initialized at 122 the ascii decimal for z. */

  while (i < 123 && i > 96) {
    print_char(i);
    --i;
  }
}
