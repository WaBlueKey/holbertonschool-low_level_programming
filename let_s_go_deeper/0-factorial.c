#include <limits.h>

int factorial(int n) {

  if(n < 0 || n > INT_MAX) { /* for error cases */
    return -1;
  }
  if(n == 0) {
    return 1;
  }
  if(n == 1) { /* for base case */
    return 1;
  }
  return n * factorial(n-1);
}
