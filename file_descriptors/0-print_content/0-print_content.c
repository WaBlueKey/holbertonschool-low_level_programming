/*
 * GitHub repo: https://github.com/WaBlueKey/holbertonschool-low_level_programming
 * project directory: file_descriptors
 * task #: 0
 * file name: 0-print_content.c
 * file type: c
 * dependent file(s): print_char.c
 *
 * summary: this is a program that prints the content of a file on the standard output.
 *
 *  by Zee Adams, May 2016
 */

#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>

int main(int ac, char *av[]) {

  int r;
  int fd;
  char tmp[BUFSIZ];

  if(ac == 1) {
    return 1;
  }
  fd = open(av[1], O_RDONLY);
  r = read(fd, tmp, BUFSIZ);

  if(r > 0) {
    write(1, tmp, r);
  }

  close(fd);
  return(0);
}
