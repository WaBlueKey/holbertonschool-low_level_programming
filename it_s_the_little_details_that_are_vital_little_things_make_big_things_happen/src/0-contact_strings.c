int print_char(char c);
/* the function concatenates two strings.*/
char *concat_strings(char *dest, const char *src) {
  int s;
  int d;
  
  for (d = 0; dest[d] != '\0'; d++) {
  }
  for (s = 0; src[s] != '\0'; s++) {
    dest[d] = src[s];
    d++;
  }
  return dest;
}
