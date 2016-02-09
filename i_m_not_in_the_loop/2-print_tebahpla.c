#include "my_functions.h"

void print_tebahpla(void)
{
  char c;
  for (c='z'; c>='a'; --c)
    /* starting at letter z in lowercase to letter a, move back letters by 1 in the loop. */
    {
      print_char(c);
      /* print the letters in reverse order from z to a. */
    }
}

