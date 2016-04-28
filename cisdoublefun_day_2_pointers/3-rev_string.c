/* this function reverses a string. */
#include "my_functions.h"

char *rev_string(char *str) {
  int length = 0; /* var to count the length of the string. */
  int fcount = 0; /* var to keep front half count. */
  int bcount = 0; /* var to keep back half count in swap. */
  char sub;

  while(*(str + length) != '\0') { /* stopping at null terminator. */
    length ++;
  }
  fcount = length; /* setting forward count to length of string. */
  while(bcount < length/2){ /* for loop, back count is used to start at 0 to
                            half of length to divide up the string for swap.*/
    sub = *(str + bcount); /* assign first character in the string to sub.*/
    *(str + bcount) =  *(str + (fcount - 1)); /* begin swap first to last. */
    *(str + (fcount - 1)) = sub; /* move sub value to the last string val. */
    fcount --; /* reduce fcount by 1 for each loop iteration. */
    bcount ++; /* increase bcount by 1 for each loop iteration. */
  }
  return str;
}
