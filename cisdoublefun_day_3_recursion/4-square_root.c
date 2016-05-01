/* an iterative function that returns the natural square root of a number. */
int square_root(int n) {

  int i = n/2; /* to reduce the value of i. */

  if(n == 0 || n == 1) { /* special cases 0 and 1 are perfect squares. */
    return n;
  }
  if(n < 0) {
    return -1;
  }
  while(i > 1) {
    if(i * i == n) {
    return i;
  }
  i --;
}
return -1;
}
