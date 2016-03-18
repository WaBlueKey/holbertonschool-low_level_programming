int print_char(char c);
/* this function copies a string and adds the null terminator.*/
char *string_ncopy(char *dest, const char *src, int n) {
  int s;

  for (s = 0; s < n && *(src + s) != '\0'; s++) {
    *(dest +s) = *(src + s);
  }
  for (; s < n; s++) {
    *(dest + s) = '\0';
  }
  return dest;
}
