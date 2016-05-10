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

  if(ac == 1) {
    return 1;
  }
  fd = open(av[1], O_RDONLY);
  r = read(fd, tmp, buf_size);

  if(r > 0) {
    write(1, tmp, r);
  }

  close(fd);
  return(0);
}
