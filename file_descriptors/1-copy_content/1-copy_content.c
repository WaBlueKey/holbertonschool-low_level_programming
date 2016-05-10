/*
 * GitHub repo: https://github.com/WaBlueKey/holbertonschool-low_level_programming
 * project directory: file_descriptors
 * task #: 1
 * file name: 1-copy_content.c
 * file type: c
 * dependent file(s): print_char.c
 *
 * summary: this program copies the content of a file into another file.
 *
 *  by Zee Adams, May 2016
 */

#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#define buf_size 512

int main(int ac, char *av[]) {

 int r;
 int fd;
 char tmp[BUFSIZ];
 int c;


 if(ac == 1 || ac > 3) { /* argument count outside of project parameters. */
   return(1);
 }
 fd = open(av[1], O_RDONLY); 
 r = read(fd, tmp, BUFSIZ);
 close(fd);

 c = open(av[2], O_RDWR|O_CREAT, 0644);
   write(c, tmp, r);


 close(c);
 return(0);
}
