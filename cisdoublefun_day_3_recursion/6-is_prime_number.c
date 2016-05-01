/* recursive function that returns 1 for a prime number, 0 otherwise.*/
int find_prime(int n, int i);

int is_prime_number(int n) {

  int i = n;

  return find_prime(n, (i - 1));
}

int find_prime(int n, int i) {

  if(n < 2) {
    return 0;
  }
  else if(i == 1) {
    return 1;
  }
  else if(n % i == 0) {
    return 0;
  }
  return find_prime(n, (i - 1));
}
