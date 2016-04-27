
#include "my_functions.h"

void print_triangle(int n) {

  int i = 0;
  int star = 0;
  int line = 0;

  while(line < n) {
    while(star < n) {
      while(i < n) {
        print_char('*');
        i++;
  }
  star++;
}
line++;
print_char('\n');
}

}
