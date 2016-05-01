/* this recursive function returns the factorial of n. */

int factorial(int n) {

  if (n > 12 || n < 0) { /* limits to accommodate int max and min. */
    return -1;
  } else if (n == 0) { /* accommodate special case of 0!. */
    return 1;
  }
    return n * factorial(n-1); /* call the function within itself. */
}
