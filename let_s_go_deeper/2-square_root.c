/* this function returns the natural square root of a number */

int num_square(int n, int x) {
  if(n < 0) { /* for negative numbers */
    return -1;
  }
  if(x * x > n) { /* to prevent an infinite loop */
    return -1;
  }
  if(x * x == n) { /* to find the square root */
    return x;
  }
  return num_square(n, x+1); 
}

int square_root(int n) {
  return num_square(n, 0);
}
