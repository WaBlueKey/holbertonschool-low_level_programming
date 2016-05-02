/* this program prints all arguments it receives backwards.*/
#include <unistd.h>

    int print_char(char c)
    {
          return (write(1, &c, 1));
    }

int main(int argc, char *argv[]) {

  while(argc > 0) {
    int i = 0;
    int j = argc - 1;
    while(*(argv[j] + i) != '\0') {
    print_char(*(argv[j] + i));
    i++;
  }
  print_char('\n');
  argc--;
  }
}
