#include <stdio.h>
/* this is a program that prints all arguments it receives. */
int main(int ac, char **av) {

  int count;

  for(count = 0; count < ac; count++){
    printf("%s\n", av[count]);
  }
  return(0);
}
