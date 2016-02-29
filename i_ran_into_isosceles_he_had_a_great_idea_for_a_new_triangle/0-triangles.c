#include <stdio.h>
/* this function prints triangles. */ 

void triangles_in_the_term(int h, int n) {

  int num_t, line, space, star;

  for (num_t = 1; num_t <= n; num_t++) { 
  /* for loop for # of triangles. */
    for (line = 1; line <= h; line++) {
    /* for loop for printing lines of triangle. */
      for (space = h - line; space > 0; space--) {
      /* for loop to print spaces before *. */
	printf(" ");
      }
      for (star = 1; star <= ((line * 2) - 1); star++) {
      /* for loop to print *'s for triangle. */
	printf("*");
      }
      printf("\n");
    }
  }
}
