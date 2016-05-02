/* this program prints all arguments it receives.*/
#include <unistd.h>

    int print_char(char c)
    {
          return (write(1, &c, 1));
    }


int main(int argc, char *argv[]) {
  int i = 0;


  while(argc > 0) {
    int j = 0;
    while(*(argv[i] + j) != '\0') {
    print_char(*(argv[i] + j));
    j++;
  }
  print_char('\n');
  i++;
  argc--;
  }
  return (0);
}
