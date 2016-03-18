int print_char(char c);
/* this function copies a string. */
char *string_copy(char *dest, const char *src) {
  int s;

  for (s = 0; *(src + s) != '\0'; s++) {
    *(dest + s) = *(src + s);
  }
  return dest;
}
