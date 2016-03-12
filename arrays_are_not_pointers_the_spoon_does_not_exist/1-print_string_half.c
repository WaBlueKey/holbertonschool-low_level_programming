int print_char(char c);

void print_string_half(char *str) {
  int l; 
  int p; 
  /* for the length of the string.*/
  for (l = 0; *(str + l); l++) {
  }
  /* for printing the string.*/
  for (p = l/2; p < l; p++) {
    print_char(str[p+1]);
  }
}
