#include <stdio.h>

int factorial(int n);

int main(void)
{
  int r;

  r = factorial(26);
  printf("%d\n", r);
  r = factorial(5);
  printf("%d\n", r);
  r = factorial(10);
  printf("%d\n", r);
  r = factorial(-1024);
  printf("%d\n", r);
  r = factorial(2147483647);
  printf("%d\n", r);
  r = factorial(-2147483648);
  printf("%d\n", r);
  r = factorial(0);
  printf("%d\n", r);
  r = factorial(69);
  printf("%d\n", r);
  r = factorial(13);
  printf("%d\n", r);
  return (0);
}
