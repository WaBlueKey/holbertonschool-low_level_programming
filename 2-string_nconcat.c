/* this function concatenates two strings similar to strncat function. */
char *string_nconcat(char *dest, char *src, int n) {

  int i = 0;
  int j = 0;

  while(dest[i] != '\0') {
    i++;
  }
  while(j < n) {
    dest[i] = src[j];
    i++;
    j++;
  }
  return dest;
}
