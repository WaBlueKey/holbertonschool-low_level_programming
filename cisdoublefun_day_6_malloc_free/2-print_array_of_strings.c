/* this function prints the content of an array of strings.*/
#include <unistd.h>
void print_string(char *str);
int print_char(char c);

void print_array_of_strings(char **a) {

  int i = 0;

  while (a[i] != '\0' ) {
    print_string(a[i]);
    print_char();
    i++;
  }
  print_char('\n');
}

void print_string(char *str) {

  int i = 0;

  while(*(str + i) != '\0') {
    print_char(*(str + i));
    i++;
  }
}

int print_char(char c)
{
      return (write(1, &c, 1));
}
