int print_char(char c);

void print_string_2(char *str) {
 
  for (; *str >= '\0';) {
    print_char(*str);
    str+=2;
  }
}
