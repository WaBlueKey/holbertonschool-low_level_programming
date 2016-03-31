#include <limits.h>
#include <math.h>

int power(int x, int y) {

  if((x^y) < 0 || (x^y) > INT_MAX) {
    return -1;
  }
  if(x == 1 || y == 0) {
    return 1;
  }
  if (x < 0) {
    return -1;
  }
  if(y == 1) {
    return x; 
  }
  return x * power(x, (y-1));
}
