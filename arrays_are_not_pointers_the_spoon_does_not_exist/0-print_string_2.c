int print_char(char c);

void print_string_2(char *str) {
  /* function to print 1 char out of every 2 starting with 1st one.*/
  for (; *str >= '\0';) {
    print_char(*str);
    str+=2; /* move two spots to the next character. */
  }
}
