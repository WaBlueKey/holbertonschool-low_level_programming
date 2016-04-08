int print_char(char c);
/* this function concatenates two strings. */
char *nconcat_strings(char *dest, const char *src, int n) {

  int s;
  int d;

  for (d = 0; dest[d] != '\0'; d++) { 
  }
  for (s = 0; s < n && src[s] != '\0'; s++, d++) {
  dest[d] = src[s];
  }
  dest[d] = '\0';
  return dest;
}
