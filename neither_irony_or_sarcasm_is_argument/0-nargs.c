#include <stdio.h>
/* this is program that prints the number of arguments you passed to it.*/
int main(int ac, char **av) {
  
  int count;
 
  if(ac > 0) 
    {
      for(count = 1; count < ac; count++);{
	av++; 
	  }
      count = count - 1;
      printf("%d\n", count);
    }
      return(0);
}
