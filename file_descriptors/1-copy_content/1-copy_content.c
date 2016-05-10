/*
 * GitHub repo: https://github.com/WaBlueKey/holbertonschool-low_level_programming
 * project directory: file_descriptors
 * task #: 1
 * file name: 1-copy_content.c
 * file type: c
 * dependent file(s): Makefile (used to compile program)
 *
 * summary: this program copies the content of a file into another file.
 *
 *  by Zee Adams, May 2016
 */

#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#define buf_size 512 /* Define buffer size since stdio.h is limited for use. */

int main(int ac, char *av[]) {

 int r;
 int fd;
 char tmp[buf_size];
 int c;

 if(ac == 1 || ac > 3) { /* argument count outside of project parameters */
   return(1);
 }
 fd = open(av[1], O_RDONLY); /* open file selected on command line read only */
 if(fd == -1) { /* error if file cannot be opened */
   return(1);
 }
 r = read(fd, tmp, buf_size); /* read file into the tmp buffer space */
 close(fd); /* close the file read from */

 c = open(av[2], O_RDWR|O_CREAT, 0644); /* create a file to copy to from tmp
                                         * and set permission 6 = User (rw)
                                         * 4 = Group (r) and 4 = Other (r)
                                         */
 if(c == -1) { /* error if file cannot be created */
   return(1);
 }
 if((write(c, tmp, r)) != r) { /* error if there isn't enough memory */
   return(1);
 }
 write(c, tmp, r); /* write to the newly created file the tmp content */

 close(c); /* close the newly created file */
 return(0);
}
