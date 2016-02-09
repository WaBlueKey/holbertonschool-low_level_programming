#include "my_functions.h"

void print_base16(void)
{
  int c = 48; 
/* Using ASCII values to set numbering for hexadecimal output*/
  while (c <= 57)
    /* setting a stopping point for c at 57 to give the value of 9*/
    {
      print_char(c);
      /* print characters from 0 - 9 */
      c++;
      /* after each value of c, add 1 more in the loop*/
    }
  c = 65;
  /* starting the count in ASCII again, this time for the letter A */
  while (c <= 70)
    /* setting a stopping point for c at 70 for the letter F */
    {
      print_char(c);
      /* print characters from A-F */
      c++;
      /* after each value of c, add 1 more in the loop*/
    }
}
