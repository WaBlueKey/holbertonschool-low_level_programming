int print_char(char c);

char *nconcat_strings(char *dest, const char *src, int n) {

  int s;
  int d;

  for (d = 0; dest[d] != '\0'; d++) {
  }
  for (s = 0; src[s] != '\0'; s++) {
    dest[d] = src[s];
    d++;
  }
  while (n > s) {
    n = s;
  }
  return dest;
  }
