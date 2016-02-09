#include "my_functions.h"

void print_alphabet(void)
{
  char c;
  for (c='a'; c<='z'; ++c)
    /* from lowercase letter a to letter z, loop through each time moving one more to the next letter */  
  {
      print_char(c);
      /* print the lowercase letters from a to z. */
    }
}
