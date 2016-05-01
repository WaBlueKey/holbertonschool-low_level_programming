/* an iterative function returning the value of x raised to the power of y.*/

int power(int x, int y) {

  int count = 0;
  long total = 1;

  if (y == 0 || x == 1) {
    return 1;
  }
  if(y < 0 || x < 0) {
      return -1;
  }
  while(count < y) {
    total *= x;
    count++;
    if(total > 2147483647 || total < -2147483648) {
      return -1;
    }
    }
    return (total);
  }
