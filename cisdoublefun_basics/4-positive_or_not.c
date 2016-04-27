/* this function takes an integer as argument and prints P if the number is
positive, N if the number is negative, and Z if the number is zero.*/

#include "my_functions.h"

void positive_or_not(int n) {
  if(n < 0) {
    print_char('N');
  }
  if(n == 0) {
    print_char('Z');
  }
  if(n > 0) {
    print_char('P');
  }
}
