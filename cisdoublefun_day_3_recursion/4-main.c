#include <stdio.h>
int square_root(int n);

int main(void)
{
  int r;

  r = square_root(2147488281);
  printf("%d\n", r);
  r = square_root(1024);
  printf("%d\n", r);
  r = square_root(16);
  printf("%d\n", r);
  r = square_root(0);
  printf("%d\n", r);
  r = square_root(25);
  printf("%d\n", r);
  r = square_root(1);
  printf("%d\n", r);
  return (0);
}