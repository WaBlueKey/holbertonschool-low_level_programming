/* this is the main file for the calculator which collects the operands and
 the operator arguments. */

#include <stdio.h>
#include <stdlib.h>

int (*get_op_func(char c))(int, int);

int main(int ac, char **av) {
  int (*gofunc)(int,int);
  int i;
  int j;
  int total;

  if(ac != 4) {
    printf("Incorrect input. Please try again.");
    return(1);
  }
  gofunc = (get_op_func(*av[2]));
  if(*gofunc == '\0') {
    return(1);
	}
  if(ac == 4) {
    i = atoi(av[1]);
    j = atoi(av[3]);

    total = ((*get_op_func(*av[2]))(i, j));
    printf("%d\n", total);
  }
  return(0);
}
