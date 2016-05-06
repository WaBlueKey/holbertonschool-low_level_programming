#include <stdio.h>
#include "0-abs.h"
#include <limits.h>

int main(void)
{
  long i;

  i = INT_MIN;
  printf("i=%ld, abs(i)=%ld\n", i, ABS(i));
  return (0);
}
