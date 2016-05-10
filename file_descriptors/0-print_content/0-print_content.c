/*
 * GitHub repo: https://github.com/WaBlueKey/holbertonschool-low_level_programming
 * project directory: file_descriptors
 * task #: 0
 * file name: 0-print_content.c
 * file type: c
 * dependent file(s): Makefile (used to compile program)
 *
 * summary: this is a program that prints the content of a file on the standard output.
 *
 *  by Zee Adams, May 2016
 */

#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#define buf_size 512 /* Define buffer size since stdio.h is limited for use.*/

int main(int ac, char *av[]) {

  int r;
  int fd;
  char tmp[buf_size];

  if(ac == 1) { /* if no file is selected on command line */
    return 1;
  }
  fd = open(av[1], O_RDONLY);/* open file selected on command line read only */
  if(fd == -1) { /* error if file cannot be opened */
    return(1);
  }
  r = read(fd, tmp, buf_size); /* read file into the tmp buffer space */


  if((write(1, tmp, r)) != r) { /* error if there isn't enough memory */
    return(1);

  }

  close(fd); /* close the file read from */
  return(0);
}
