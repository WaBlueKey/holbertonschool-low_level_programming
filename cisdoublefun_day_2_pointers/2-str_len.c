/* this function returns the length of a string. */
#include "my_functions.h"

int str_len(char *s) {

  int i = 0;

  while(*(s + i) != '\0') {
    i++;
  }
  return i;
}
