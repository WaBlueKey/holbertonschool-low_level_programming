/* this function prints a string. */

#include "my_functions.h"

void print_string(char *str) {

  int i = 0;

  while(*(str + i) != '\0') {
    print_char(*(str + i));
    i++;
  }
}
