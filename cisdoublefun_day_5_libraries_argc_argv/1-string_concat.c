/* this function concatenates two strings similar to strcat function. */
char *string_concat(char *dest, char *src) {

  int i = 0;
  int j = 0;

  while(dest[i] != '\0') {
    i++;
  }
  while(src[j] != '\0') {
    dest[i] = src[j];
    i++;
    j++;
  }
  return dest;
}
