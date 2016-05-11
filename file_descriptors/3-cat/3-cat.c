/*
 * GitHub repo: https://github.com/WaBlueKey/holbertonschool-low_level_programming
 * project directory: file_descriptors
 * task #: 3
 * file name: 3-cat.c
 * file type: c
 * dependent file(s): Makefile (used to compile program)
 *
 * summary: this program reproduces the behaviour of the cat command.
 *
 *  by Zee Adams, May 2016
 */

#include <fcntl.h>
#include <unistd.h>
#define buf_size 1024 /* Define buffer size since stdio.h is limited for use.*/

int main(int ac, char *av[]) {
 int r;
 int i;
 int fd;
 char tmp[buf_size];

 if(ac == 1) { /* if no file is selected on command line */
   return 1;
 }
 for(i = 1; i < ac; i++) { /* for loop to go through command line arguments */
   fd = open(av[i], O_RDONLY);/* open file selected on command line read only */
   if(fd == -1) { /* error if file cannot be opened */
     return(1);
   }
 r = read(fd, tmp, buf_size); /* read file into the tmp buffer space */
 if((write(1, tmp, r)) != r) { /* error if there isn't enough memory */
   return(1);
 }
 close(fd); /* close the file read from */
 }
   return(0);
}
