/* this iterative function returns the factorial of n. */

int factorial(int n) {

  int count = 1;
  int newn = 1;

  if (n > 12 || n < 0) { /* limits to accommodate int max and min. */
    return -1;
  } else if (n == 0) { /* accommodate special case of 0!. */
    return 1;
  } else {
    while(count <= n) {
      newn = newn * count; 
      count ++;
    }
  }
  return newn;
}
