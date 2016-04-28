#include "my_functions.h"

char *rev_string(char *str) {


  int i = 0;
  int j;
  char sub;
  char *s;
  s = &sub;

  while(*(str + i) != '\0') {
    i++;
  }

  j = i;

  while(j > 0) {
    char temp;
    temp = *(s + j);
    *(str + j) =  *(str + i);
    *(str + i) = temp;
    i++;
    j--;

  }


  return s;
}
