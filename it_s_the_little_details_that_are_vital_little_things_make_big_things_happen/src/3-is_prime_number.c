/* this function returns 1 for prime num or 0 if not prime num */

int find_prime(int n, int i) {
  if(n < 2) {
    return 0;
  }
  if (n == 2) {
    return 1;
  }
  if (n % 2 == 0 || n % 3 == 0) {
    return 0;
  }
  if (n % 5 == 0 || n % 7 == 0) {
    return 0;
    }
  else {
    return 1;
  }
  return find_prime(n, i + 1);
}

int is_prime_number(int n) {
  return find_prime(n, 2);
}
