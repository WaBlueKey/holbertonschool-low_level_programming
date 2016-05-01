/* this function returns the natural square root of a number using recursion. */
int loop(int n, int i);

int square_root(int n) {

  int i = 0;
  return loop(n, i); /* call the recursive function to find sq root. */

}

int loop(int n, int i) {

  if(i * i == n) { /* to find the natural square n/i must = i. */
    return i;
  }
  if(i * i > n || n < 0) { /* to limit the loop. */
    return -1;
  }
  return loop(n, i + 1); /* to change the value of i for each iteration. */
}
