#include "../inc/my_functions.h"

void print_string(char *str) {

  int s;
  /* going through the string to print each char before 0. */
  for (s = 0; str[s] != '\0'; s++) {
    print_char(str[s]);
  }
}
