void swap_int(int *a, int *b) {
  int t = *a; /* setting a temporary number to swap numbers. */
  *a = *b; /* setting numbers in a to b. */
  *b = t; /* setting numbers in b to t (original a numbers). */
}
