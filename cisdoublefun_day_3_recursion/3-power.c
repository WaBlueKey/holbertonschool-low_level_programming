
/* recursive function that returns the value of x raised to the power of y.*/
int power(long x, int y) {

  long total = 0;


  if (y == 0 || x == 1) {
    return 1;
  }
  if(y < 0 || x < 0) {
      return -1;
  }
  if (x > 46340 || y > 31) {
    return -1;
  }
  if(x > 2147483647 / power(x, (y - 1))){
    return -1;
  }
  total = x * power(x, (y - 1));
  return total;
}
